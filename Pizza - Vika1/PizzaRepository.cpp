#include <strings.h>
#include "PizzaRepository.h"
#include <fstream>
#include "pizza.h"
using namespace std;

PizzaRepository::PizzaRepository()
{
    //ctor
}
PizzaRepository::~PizzaRepository()
{
    //dtor
}
void PizzaRepository::setVerbose(bool v){
        verbose = v;
    }

void PizzaRepository::start(){
    char answer;
    do {
    PizzaRepository pizzaRepository;
    pizzaRepository.setVerbose(true);
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

    cin >> pizzaRepository;
    ofstream fout;
    fout.open("size_price.txt", ios::app);
    pizzaRepository.setVerbose(false);
    fout << pizzaRepository;
    fout.close();

    fin.open("size_price.txt", ios::app);
    fin.close();
    pizzaRepository.setVerbose(true);
    cout << pizzaRepository;

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
   // cout << "price: ";
   if (pizzaRepository.verbose){
    cout << "Pleas enter pizza price: ";
    }
    in >> pizzaRepository.price;
    return in;
}
ostream& operator << (ostream& out, const PizzaRepository& pizzaRepository){

    out << pizzaRepository.name << " " << pizzaRepository.price << endl;
    cout << endl;

    return out;
}
