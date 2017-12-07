#ifndef TOPPINGREPOSITORY_H
#define TOPPINGREPOSITORY_H
#include <fstream>
#include "toppingservice.h"
#include <stdlib.h>
class ToppingRepository
{
    public:
        ToppingRepository();
        void PrintToppingsVector(vector<Topping>& printTopping);
        vector<Topping> FillToppingsVectorFromTXT(vector<Topping>& retrieveToppings);
        Topping parseString (string line);
    private:
};

#endif // TOPPINGREPOSITORY_H
