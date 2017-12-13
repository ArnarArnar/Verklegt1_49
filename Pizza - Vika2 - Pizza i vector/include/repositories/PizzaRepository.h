#ifndef PIZZAREPOSITORY_H
#define PIZZAREPOSITORY_H
#include "Pizzaservice.h"
#include <iostream>
#include <fstream>

using namespace std;

class PizzaRepository
{
    public:
        PizzaRepository();
        PizzaRepository(char *name, double price);
        virtual ~PizzaRepository();
//        void storePizza(const Pizza& pizza);
//        Pizza retrievePizza();
        void setVerbose(bool v);
        friend istream& operator >> (istream& in, PizzaRepository& pizzaRepository);
        friend ostream& operator << (ostream& out, const PizzaRepository& pizzaRepository);
        void set_size_price();
//        void addNewOrderToTXT(vector<Pizza>& pizzaOrder);
        void viewOrdersInTXT();

    protected:

    private:
        char name[32];
        double price;
        bool verbose;
};

#endif // PIZZAREPOSITORY_H
