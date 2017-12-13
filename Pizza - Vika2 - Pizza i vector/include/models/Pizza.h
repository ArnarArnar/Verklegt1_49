#ifndef PIZZA_H
#define PIZZA_H
#include "salesui.h"
//#include "topping.h"
#include "../service/pizzaservice.h"
#include <vector>

class Pizza
{
    public:
        Pizza();
        Pizza(char pizzaSize, vector<Topping>& toppings);
        char getPizzaSize() const;
        vector<Topping>  getToppingName() const;
        void PrintPizzaVector (const vector<Pizza>& pizzaOrder);
        void FillPizzaVector(vector<Pizza>& pizzaOrder);
        friend ostream& operator << (ostream& out, const vector<Topping>& toppings);


    private:
        vector<Pizza> pizzas;
        vector<Topping> toppings;
        char pizzaSize;

};

#endif // PIZZA_H
