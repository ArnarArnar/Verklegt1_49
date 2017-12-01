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
void PizzaRepository::storePizza(const Pizza& pizza){

    ofstream fout;
    fout.open("textOutput.txt", ios::app);
    fout << pizza << endl;
    fout.close();
       /* ofstream fout;
        fout.open("pizzas.txt");

        fout << pizza;

        fout.close();
        */
}
Pizza PizzaRepository::retrievePizza(){

    ifstream fin;
    fin.open("pizzas.txt");
        Pizza pizza;
        fin >> pizza;

        fin.close();
    return pizza;
}
