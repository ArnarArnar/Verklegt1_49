#ifndef PIZZASERVICE_H
#define PIZZASERVICE_H
#include "Pizza.h"

#include "MainUI.h"


class PizzaService
{
    public:
        PizzaService();
        void FillPizzaVector(vector<Pizza>& newPizzaOrder);
        void PrintToScreenPizzaVector (const vector<Pizza>& pizzaOrder);
        void ToppingsInOrder (const vector<Topping>& topping);

    private:
        vector<Pizza> pizzas;


};

#endif // PIZZASERVICE_H
