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
void Topping::start(){
    char answer;
    Topping topping;
    topping.setVerbose(true);
    cin >> topping;
    ofstream fout;
    fout.open("ToppingsList.txt", ios::app);
    topping.setVerbose(false);
    fout << topping;
    fout.close();

    ifstream fin;
    fin.open("ToppingsList.txt", ios::app);
    fin.close();
    topping.setVerbose(true);
    cout << topping;

    cout << "Do you want a list of toppings?(y/n)";

    cin >> answer;

    if (answer == 'y'){
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
    }
}
istream& operator >> (istream& in, Topping& topping){
    //cout << "Name: ";
    if (topping.verbose){
    cout << "Pleas enter topping name: ";
    }
    in >> topping.name;
   // cout << "price: ";
   if (topping.verbose){
    cout << "Pleas enter topping price: ";
    }
    in >> topping.price;
    return in;
}
ostream& operator << (ostream& out, const Topping& topping){

    out << topping.name << " " << topping.price << endl;
    cout << endl;

    return out;
}
