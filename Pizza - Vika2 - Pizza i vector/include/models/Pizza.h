#ifndef PIZZA_H
#define PIZZA_H
#include "Topping.h"
#include "toppingservice.h"
//#include "salesui.h"
#include <iostream>
using namespace std;


class Pizza
{
    public:
        Pizza();
        Pizza(string costumerName, char pizzaSize, vector<Topping> toppings, char pickup, string address, double pizzaPrice);
        string getCostumerName() const;
        char getPizzaSize() const;
        vector<Topping>  getToppingName() const;
        char getDelivery() const;
        string getAddress() const;
        double getPizzaPrice() const;
       // friend istream& operator >> (istream& in, Pizza& pizza);
        //friend ostream& operator << (ostream& out, const Pizza& pizza);
        void PrintPizzaVector (const vector<Pizza>& pizzaOrder);
        void FillPizzaVector(vector<Pizza>& pizzaOrder);
        friend ostream& operator << (ostream& out, const vector<Topping>& toppings);


    private:
        vector<Pizza> pizzas;
        vector<Topping> toppings;
        char pizzaSize;
        string costumerName;
        char delivery;
        string address;
        double pizzaPrice;
//        PizzaService pizzaService;
};

#endif // PIZZA_H
