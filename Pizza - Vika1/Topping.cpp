#include <strings.h>
#include <fstream>
#include "Topping.h"
using namespace std;
Topping::Topping()
{
    //ctor
}
Topping::Topping(char *name, double price){
    strcpy(this->name, name);
    this->price = price;
}
void Topping::setVerbose(bool v){
        verbose = v;
    }
Topping::~Topping()
{
    //dtor
}
void Topping::set_toppings(){
    char answer;
    do{
    Topping topping;
    topping.setVerbose(true);
    ifstream fin;
    string str;
    fin.open("ToppingsList.txt");
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
    cin >> topping;
    ofstream fout;
    fout.open("ToppingsList.txt", ios::app);
    topping.setVerbose(false);
    fout << topping;
    fout.close();

    fin.open("ToppingsList.txt", ios::app);
    fin.close();
    topping.setVerbose(true);
    cout << topping;

    cout << "Do you want to add another topping?(y/n)";

    cin >> answer;
    }
    while (answer == 'y');
}
istream& operator >> (istream& in, Topping& topping){

    if (topping.verbose){
    cout << "Pleas enter topping name: ";
    }
    in >> topping.name;

   if (topping.verbose){
    cout << "Pleas enter topping price: ";
    }
    in >> topping.price;
    return in;
}
ostream& operator << (ostream& out, const Topping& topping){

        if (topping.verbose) {
            out << "Topping: ";
        }
        out << topping.name << " ";
        if (topping.verbose) {
            out << "Price: ";
        }
        out << topping.price << endl;

    return out;
}
