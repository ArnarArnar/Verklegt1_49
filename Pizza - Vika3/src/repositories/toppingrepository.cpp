#include "toppingrepository.h"

ToppingRepository::ToppingRepository()
{
    //ctor
}

void ToppingRepository::storeAllToppings(vector<Topping>& printTopping)
{
    ofstream fout;
    ToppingRepository removeText; ///Til ad eyða gamla listanum áður en sá nýji er skrifaðu í skránna
    removeText.deleteTextFromTXT();
    fout.open ("toppings.txt", ios::app);
    int toppingCount = printTopping.size();

    for(int i = 0; i < toppingCount; i++){
        fout << printTopping[i].get_name() << ",";
        fout << printTopping[i].get_price() << ",";
        fout << endl;
    }
    fout.close();
}
void ToppingRepository::deleteTextFromTXT(){
    ofstream fout;
    fout.open("toppings.txt", ofstream::out | ofstream::trunc);
    fout.close();
}
vector<Topping> ToppingRepository::FillToppingsVectorFromTXT(){
    vector<Topping> toppingsFromFile;
    ifstream fin("toppings.txt");
    if (fin.is_open()){
        string line;
        while(getline(fin, line)){
            Topping topp = parseString(line);
            toppingsFromFile.push_back(topp);
        }
       // cout << "The file 'toppings.txt' was sucsessfully loaded to vector" << endl;
    }
    else {
        cout << "unable to open file" << endl;
    }

    return toppingsFromFile;
}
Topping ToppingRepository::parseString (string line){
    string toppingString = "";
    vector<string> toppingsVectorSting;
    for(unsigned int i = 0; i < line.size(); i++){
        if (line[i] == ','){
            toppingsVectorSting.push_back(toppingString);
            toppingString = "";
        }
        else{
            toppingString += line[i];
        }
    }
    Topping t (toppingsVectorSting[0], atof(toppingsVectorSting[1].c_str()));
    return t;
}


