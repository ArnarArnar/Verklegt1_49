#ifndef PIZZAREPOSITORY_H
#define PIZZAREPOSITORY_H
#include "Pizza.h"
#include <iostream>
using namespace std;

class PizzaRepository
{
public:
    PizzaRepository();
    PizzaRepository(char *name, double price);
    void setVerbose(bool v);
    friend istream& operator >> (istream& in, PizzaRepository& pizzaRepository);
    friend ostream& operator << (ostream& out, const PizzaRepository& pizzaRepository);
    void set_size_price();
    void addNewOrderToTXT(vector<Pizza>& pizzaOrder);
    void viewOrdersInTXT();
    void listOfPizzas();

protected:

private:
    char name[32];
    double price;
    bool verbose;
};

#endif // PIZZAREPOSITORY_H
