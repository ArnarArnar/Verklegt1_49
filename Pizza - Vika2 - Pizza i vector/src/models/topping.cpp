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

ostream& operator << (ostream& out, vector<Topping>& toppingFromVector) {
    for (unsigned int i = 0; i < toppingFromVector.size(); i++){
        out << "Name of topping  : " << toppingFromVector[i].get_name() << endl;
        out << "Price of topping : " << toppingFromVector[i].get_price() << endl;
    }
    return out;
}
/*
ostream& operator << (ostream& out, const Topping& topping) {
    out << topping.name << endl;
    out << topping.price << endl;
>>>>>>> 44e47e7cf765e18d9ac9166964bbb38e7e125975
    return out;
}
*/


istream& operator >> (istream& in, vector<Topping>& toppingFromVector) {
    int numberOfToppings;
    cout << "Number of toppings: ";
    in >> numberOfToppings;
    Topping topping;

    for(int i = 0; i < numberOfToppings; i++)
    {
        cout << "Topping: ";
        in >> ws;
        getline(in, topping.name);
        toppingFromVector.push_back(topping);
        cout << "Price: ";
        /// hér vantar að kasta villu ef ekki int.
        cin >> topping.price;
        toppingFromVector.push_back(topping);
    }


    return in;
}


void Topping::addTopping(Topping topping){
    toppings.push_back(topping);
}

