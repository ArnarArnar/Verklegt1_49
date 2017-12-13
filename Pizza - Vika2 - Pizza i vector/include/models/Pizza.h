#ifndef PIZZA_H
#define PIZZA_H
#include "topping.h"


class Pizza
{
    public:
        Pizza();
        Pizza(char pizzaSize, vector<Topping>& toppings);
        char getPizzaSize() const;
        vector<Topping>  getToppingName() const;
        void setPizzaSize(char Pizza);
        void setToppingName(vector<Topping>);
        void PrintPizzaVector (const vector<Pizza>& pizzaOrder);
        void FillPizzaVector(vector<Pizza>& pizzaOrder);
        friend ostream& operator << (ostream& out, Pizza& pizza);
        friend istream& operator >> (istream& in, Pizza& pizza);

    private:
        //vector<Pizza> pizzas;
        vector<Topping> toppings;
        char pizzaSize;


};

#endif // PIZZA_H
