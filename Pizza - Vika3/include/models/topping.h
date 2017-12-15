#ifndef TOPPING_H
#define TOPPING_H
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Topping
{
public:
    Topping();
    Topping(string name, double price);
    string get_name() const;
    double get_price() const;
    void addTopping(Topping topping);
    string name;
    double price;

private:

    vector <Topping> toppings;
};

#endif // TOPPING_H
