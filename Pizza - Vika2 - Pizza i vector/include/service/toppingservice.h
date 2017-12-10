#ifndef TOPPINGSERVICE_H
#define TOPPINGSERVICE_H
#include "topping.h"
#include "toppingrepository.h"
#include "InvalidTopping.h"
#include <climits>


class ToppingService
{
    public:
        ToppingService();
        vector<Topping> FillToppingsVectorFromTXTService();
        void printToppingsToScreenFromVector(vector<Topping>& toppingFromVector);
        void addToppingsVector(vector<Topping>& addtopping);
        vector<Topping> listAllToppings();


//        void printToppingsToScreenFromVector(vector<Topping>& toppingFromVector);
    private:
};

#endif // TOPPINGSERVICE_H
