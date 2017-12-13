#ifndef TOPPINGREPOSITORY_H
#define TOPPINGREPOSITORY_H
#include <fstream>
#include <stdlib.h>
#include <vector>
#include "../service/toppingservice.h"


class ToppingRepository
{
    public:
        ToppingRepository();
        void storeAllToppingsToTXT(vector<Topping>& printTopping);
        vector<Topping> FillToppingsVectorFromTXT();
        Topping parseString (string line);
        vector<Topping> listAllToppings();

    private:
        void deleteTextFromTXT();
};

#endif // TOPPINGREPOSITORY_H
