#ifndef PIZZAORDERREPOSITORY_H
#define PIZZAORDERREPOSITORY_H
#include "pizzaorderservice.h"
#include <fstream>




class PizzaOrderRepository
{
    public:
        PizzaOrderRepository();
        void addNewOrderToTXT(vector<PizzaOrder>& pizzaOrder);


    private:
//        vector<PizzaOrder> pizzas;
};

#endif // PIZZAORDERREPOSITORY_H
