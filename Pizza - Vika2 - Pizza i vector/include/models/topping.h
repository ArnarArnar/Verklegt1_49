#ifndef TOPPING_H
#define TOPPING_H
//#include "../service/toppingservice.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;


class Topping
{
    public:
        Topping();
        Topping(string name, double price);
        string get_name() const;
        double get_price() const;
        friend ostream& operator << (ostream& out, vector<Topping>& toppingFromVector);
        friend istream& operator >> (istream& in, vector <Topping>& toppings);
        /// Næ ekki að hafa private eftir að ég setti inn istream& operator >> (istream& in, Topping& topping)
        string name;
        double price;
        void addTopping(Topping topping);


    private:

        vector <Topping> toppings;

};

#endif // TOPPING_H
