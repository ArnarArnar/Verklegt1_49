#ifndef PIZZA_H
#define PIZZA_H
#include "Topping.h"
#include "toppingservice.h"
#include <iostream>
using namespace std;
class Pizza
{
    public:
        Pizza();
        Pizza(string costumerName, string pizzaSize, vector<Topping> toppings, int pickup, double pizzaPrice);
        string getCostumerName() const;
        string getPizzaSize() const;
        vector<Topping>  getToppingName() const;
        int getPickup() const;
        double getPizzaPrice() const;
       // friend istream& operator >> (istream& in, Pizza& pizza);
        //friend ostream& operator << (ostream& out, const Pizza& pizza);
        void PrintPizzaVector (const vector<Pizza>& pizzaOrder);
        void FillPizzaVector(vector<Pizza>& pizzaOrder);


    private:
        vector<Pizza> pizzas;
        vector<Topping> toppings;
        string pizzaSize;
        string costumerName;
        int pickup;
        double pizzaPrice;
};

#endif // PIZZA_H
