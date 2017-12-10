#include "topping.h"

Topping::Topping()
{
    //ctor
}


Topping::Topping(string name, double price){
    this->price = price;
    this->name = name;
}

string Topping::get_name() const{
    return this->name;
}

double Topping::get_price()const{
    return this->price;
}

ostream& operator << (ostream& out, const Topping& topping) {
    out << topping.name << endl;
    out << topping.price << endl;
    return out;
}


istream& operator >> (istream& in, Topping& topping) {

    in >> ws;
    getline(in, topping.name);

    in >> topping.price;

    return in;
}



void Topping::addTopping(Topping topping){
    toppings.push_back(topping);
}

