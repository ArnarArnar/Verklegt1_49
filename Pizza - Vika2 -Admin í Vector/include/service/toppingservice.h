#ifndef TOPPINGSERVICE_H
#define TOPPINGSERVICE_H
#include "topping.h"
#include "toppingrepository.h"


class ToppingService
{
    public:
        ToppingService();
        vector<Topping> FillToppingsVectorFromTXTService(vector<Topping>& retrieveToppings);
        void printToppingsToScreenFromVector(vector<Topping>& toppingFromVector);
        void addToppingsVector(vector<Topping>& addtopping);
        void printToppingsToTXT(vector<Topping>& toppingFromVector);
    private:
};

#endif // TOPPINGSERVICE_H
