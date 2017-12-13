#include "toppingrepository.h"

ToppingRepository::ToppingRepository()
{
    //ctor
}

void ToppingRepository::storeAllToppingsToTXT(vector<Topping>& printTopping){
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
    ///Hér þarf að kasta villu ef það virkar ekki.
     //   cout << "unable to open file" << endl;
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
vector<Topping> ToppingRepository::listAllToppings()
{
    ToppingRepository toppRepo;
    Topping toppingAdd;
    vector<Topping> toppingToSelectFrom = toppRepo.FillToppingsVectorFromTXT();
    int toppingSelection = -1;
    while (toppingSelection != 0)
    {
        cout << "Please enter id for toppings to add (0 to quit)" << endl;
        for (size_t i = 0; i < toppingToSelectFrom.size(); i++)
        {
            cout << "[" << i+1 << "] " << toppingToSelectFrom[i].name << endl;
        }
        cout << "Menu>Sales>Order: ";
        cin >> toppingSelection;
        while(cin.fail())
        {
        cin.clear(); //clear input buffer to restore cin to a usable state
        cin.ignore(INT_MAX, '\n'); //ignore last input
        cout << "you can only enter numbers" << endl;
        cout << "Menu>Sales>Order: ";
        cin >> toppingSelection;
        }
    Topping topping;

        if (toppingSelection > 0 && toppingSelection <= (int)toppingToSelectFrom.size())
        {
            toppingAdd.addTopping(toppingToSelectFrom[toppingSelection-1]);
        }
    }
    return toppingToSelectFrom;
}

