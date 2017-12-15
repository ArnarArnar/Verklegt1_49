#include "topping.h"

Topping::Topping()
{
    //ctor
}

Topping::Topping(string name, double price)
{
    this->price = price;
    this->name = name;
}

string Topping::get_name() const
{
    return this->name;
}

double Topping::get_price()const
{
    return this->price;
}

void Topping::addTopping(Topping topping)
{
    toppings.push_back(topping);
}

