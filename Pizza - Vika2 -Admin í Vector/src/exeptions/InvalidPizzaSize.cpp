#include "InvalidPizzaSize.h"

InvalidPizzaSize::InvalidPizzaSize()
{
    //ctor
}

InvalidPizzaSize::InvalidPizzaSize(string message)
{
    this-> message = message;
}

string InvalidPizzaSize::getMessage()
{
    return message;
}
