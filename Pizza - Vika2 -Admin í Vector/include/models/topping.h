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
        friend ostream& operator << (ostream& out, const Topping& getTopping);
        friend istream& operator >> (istream& in, Topping& getTopping); ///Mögulega henda ekki virkt
        void addTopping(Topping topping);
    private:
        string name;
        double price;
        vector <Topping> toppings;
};

#endif // TOPPING_H
