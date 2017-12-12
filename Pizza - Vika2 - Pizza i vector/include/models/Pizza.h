#ifndef PIZZA_H
#define PIZZA_H
#include "Topping.h"
#include "toppingservice.h"
#include "InvalidName.h"
#include "InvalidPizzaSize.h"
#include "InvalidDelivery.h"
//#include "salesui.h"
#include <iostream>
using namespace std;


class Pizza
{
    public:
        Pizza();
        Pizza(string costumerName, char pizzaSize, vector<Topping> toppings, char delivery, string address, double pizzaPrice, string notes, char inTheOven, char ready, char payed);
        string getCostumerName() const;
        char getPizzaSize() const;
        vector<Topping>  getToppingName() const;
        char getDelivery() const;
        string getAddress() const;
        double getPizzaPrice() const;
        string getNotes() const;
        char getInTheOven() const;
        char GetReady() const;
        char GetpPayed() const;



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
        string notes;
        char inTheOven;
        char ready;
        char payed;
//        PizzaService pizzaService;
};

#endif // PIZZA_H
