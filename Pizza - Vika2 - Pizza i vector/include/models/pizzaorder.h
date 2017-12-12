#ifndef PIZZAORDER_H
#define PIZZAORDER_H


#include "topping.h"
#include "salesui.h"

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
