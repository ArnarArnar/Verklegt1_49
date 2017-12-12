#ifndef PIZZAORDERSERVICE_H
#define PIZZAORDERSERVICE_H
#include "pizzaorder.h"
#include "pizzaorderrepository.h"


class PizzaOrderService
{
    public:
        PizzaOrderService();
        void PrintToScreenPizzaVector (vector<PizzaOrder>& pizzaorders);
        void addNewOrderToTXTService(vector<PizzaOrder>& pizzaOrder);


    private:
     //  vector<PizzaOrder> pizzaOrders;
};

#endif // PIZZAORDERSERVICE_H
