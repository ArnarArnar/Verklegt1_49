#ifndef PIZZASERVICE_H
#define PIZZASERVICE_H
#include "Pizza.h"
#include "PizzaRepository.h"





class PizzaService
{
    public:
        PizzaService();
        void FillPizzaVectorService(vector<Pizza>& pizzas);
        vector<Topping> listAllToppings();
        void ToppingsInOrder (const vector<Topping>& topping);

    private:
        vector<Pizza> pizzas;
        vector<Topping> toppings;

};

#endif // PIZZASERVICE_H
