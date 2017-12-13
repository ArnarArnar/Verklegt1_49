#ifndef TOPPINGSERVICE_H
#define TOPPINGSERVICE_H
#include "../models/topping.h"
#include "../repositories/toppingrepository.h"
#include "InvalidTopping.h"
#include <climits>
#include <vector>
#include <iostream>

using namespace std;
class ToppingService
{
    public:
        ToppingService();
        vector<Topping> FillToppingsVectorFromTXTService();
        void storeAllToppingsToTXTservice(vector<Topping>& printTopping);
        vector<Topping> listAllToppings();
    private:

};

#endif // TOPPINGSERVICE_H
