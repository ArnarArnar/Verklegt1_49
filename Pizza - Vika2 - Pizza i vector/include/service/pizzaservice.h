#ifndef PIZZASERVICE_H
#define PIZZASERVICE_H
#include "Pizza.h"
#include <vector>
#include "PizzaRepository.h"
class PizzaService
{
    public:
        /// breytti parameters
        void FillPizzaVectorService();
        vector<Topping> listAllToppings();
        void ToppingsInOrder (const vector<Topping>& topping);

    private:
        vector<Pizza> pizzas;
        vector<Topping> toppings;

};

#endif // PIZZASERVICE_H
