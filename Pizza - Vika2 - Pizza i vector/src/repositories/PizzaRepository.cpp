#include "PizzaRepository.h"

PizzaRepository::PizzaRepository()
{
    //ctor
}
PizzaRepository::~PizzaRepository()
{
    //dtor
}
/*
void PizzaRepository::setVerbose(bool v){
        verbose = v;
    }
*/
void PizzaRepository::addNewOrderToTXT(vector<Pizza>& pizzaOrder){
    ofstream fout;
    fout.open ("pizzaorders.txt", ios::app);
    int toppingCount = pizzaOrder.size();

    for(int i = 0; i < toppingCount; i++){
        fout << pizzaOrder[i].getCostumerName() << ",";
        fout << pizzaOrder[i].getPizzaSize() << ",";
        fout << pizzaOrder[i].getDelivery() << ",";
        fout << pizzaOrder[i].getAddress() << ",";
        fout << pizzaOrder[i].getNotes() << ",";
        fout << pizzaOrder[i].getPizzaPrice() << ",";

        fout << endl;
    }
    fout.close();
}

void PizzaRepository::viewOrdersInTXT(){
    string str;
    ifstream fin;
    fin.open("pizzaorders.txt");
    if(fin.is_open()){
        while(!fin.eof()){
            getline(fin, str);
            cout << str << endl;
        }
        cout << fin.eof() << endl;
    }
    else {
        cout << "File not open" << endl;
    }
    fin.close();
}






















/*
void PizzaRepository::set_size_price(){
    char answer;
    do {
    PizzaRepository size_price;
    size_price.setVerbose(true);
    ifstream fin;
    string str;
    fin.open("size_price.txt");
    if(fin.is_open()){
        while(!fin.eof()){
            getline(fin, str);
            cout << str << endl;
        }
        cout << fin.eof() << endl;
    }
    else {
        cout << "File not open" << endl;
    }
    fin.close();

    cin >> size_price;
    ofstream fout;
    fout.open("size_price.txt", ios::app);
    size_price.setVerbose(false);
    fout << size_price;
    fout.close();

    fin.open("size_price.txt", ios::app);
    fin.close();
    size_price.setVerbose(true);
    cout << size_price;

    cout << "Do you want to add another pizza?(y/n)";

    cin >> answer;
    }
    while (answer == 'y');
}

void PizzaRepository::storePizza(const Pizza& pizza) {

    ofstream fout;
    fout.open("pizzaSizes.txt");
    fout << pizza;
    fout.close();

}
Pizza PizzaRepository::retrievePizza() {

    ifstream fin;
    fin.open("pizzaSizes.txt");
    Pizza pizza;
    fin >> pizza;

    fin.close();
    return pizza;
}
istream& operator >> (istream& in, PizzaRepository& pizzaRepository){
    if (pizzaRepository.verbose){
    cout << "Pleas enter pizza size: ";
    }
    in >> pizzaRepository.name;

   if (pizzaRepository.verbose){
    cout << "Pleas enter pizza price: ";
    }
    in >> pizzaRepository.price;
    return in;
}
ostream& operator << (ostream& out, const PizzaRepository& pizzaRepository){

        if (pizzaRepository.verbose) {
            out << "Pizza: ";
        }
        out << pizzaRepository.name << " ";
        if (pizzaRepository.verbose) {
            out << "Price: ";
        }
        out << pizzaRepository.price << endl;

    return out;
}
*/
