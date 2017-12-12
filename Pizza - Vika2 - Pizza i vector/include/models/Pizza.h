#ifndef PIZZA_H
#define PIZZA_H

#include "salesui.h"
//#include "topping.h"



class Pizza
{
    public:
        Pizza();
        Pizza(char pizzaSize, vector<Topping>& toppings);
        char getPizzaSize() const;
        vector<Topping>  getToppingName() const;




       // friend istream& operator >> (istream& in, Pizza& pizza);
        //friend ostream& operator << (ostream& out, const Pizza& pizza);
        void PrintPizzaVector (const vector<Pizza>& pizzaOrder);
        void FillPizzaVector(vector<Pizza>& pizzaOrder);
        friend ostream& operator << (ostream& out, const vector<Topping>& toppings);


    private:
        vector<Pizza> pizzas;
        vector<Topping> toppings;
        char pizzaSize;
//        PizzaService pizzaService;
};

#endif // PIZZA_H
