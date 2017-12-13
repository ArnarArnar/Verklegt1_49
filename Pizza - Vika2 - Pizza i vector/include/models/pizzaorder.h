#ifndef PIZZAORDER_H
#define PIZZAORDER_H
#include <iostream>
#include "../models/topping.h"
#include "invalidName.h"

using namespace std;

class PizzaOrder
{
    public:
        PizzaOrder();
        PizzaOrder(string costumerName, char delivery, string address, double pizzaPrice, string notes, char inTheOven, char ready, char payed);

        string getCostumerName() const;
        string getAddress() const;
        char getDelivery() const;
        double getPizzaPrice() const;
        string getNotes() const;
        char getInTheOven() const;
        char GetReady() const;
        char GetPayed() const;

        void getCostumerName(string costumerNamename);
        void getAddress(string address);
        void getDelivery(char delivery);
        void getPizzaPrice(double pizzaPrice);
        void getNotes(string notes);
        void getInTheOven(char inTheOven);
        void GetReady(char ready);
        void GetPayed(char payed);
        void FillPizzaOrderVector(vector<PizzaOrder>& newOrders);

    private:
        vector<PizzaOrder> pizzaOrders;
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
};

#endif // PIZZAORDER_H
