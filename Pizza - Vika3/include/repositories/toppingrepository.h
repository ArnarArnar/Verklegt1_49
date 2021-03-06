#ifndef TOPPINGREPOSITORY_H
#define TOPPINGREPOSITORY_H
#include <fstream>
#include "toppingservice.h"
#include <stdlib.h>
class ToppingRepository
{
public:
    ToppingRepository();
    void storeAllToppings(vector<Topping>& printTopping);
    vector<Topping> FillToppingsVectorFromTXT();
    Topping parseString (string line);
private:
    void deleteTextFromTXT();
};

#endif // TOPPINGREPOSITORY_H
