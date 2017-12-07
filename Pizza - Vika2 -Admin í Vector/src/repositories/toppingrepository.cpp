#include "toppingrepository.h"

ToppingRepository::ToppingRepository()
{
    //ctor
}

void ToppingRepository::PrintToppingsVector(vector<Topping>& printTopping){
    ofstream fout;

    fout.open ("toppings.txt", ios::app);
    int toppingCount = printTopping.size();
    cout << toppingCount;

    for(int i = 0; i < toppingCount; i++){
        fout << printTopping[i].get_name() << ",";
        fout << printTopping[i].get_price() << "," << endl;
    }
    fout.close();
}
vector<Topping> ToppingRepository::FillToppingsVectorFromTXT(vector<Topping>& retrieveToppings){
    vector<Topping> toppingsFromFile;
    ifstream fin("toppings.txt");
    if (fin.is_open()){
        string line;
        while(getline(fin, line)){
            Topping topp = parseString(line);
            toppingsFromFile.push_back(topp);
        }
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


