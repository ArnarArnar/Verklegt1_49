#include "InvalidPizzaSize.h"

InvalidPizzaSize::InvalidPizzaSize()
{
    //ctor
}

InvalidPizzaSize::InvalidPizzaSize(string message)
{
    this -> message = message;

}
string InvalidPizzaSize:: getMessage()
{

    return message;
}

bool InvalidPizzaSize::isValdPizzaSize(char size)
{
    bool retVal;

    if (size != '1' && size != '2' && size != '3')
    {
        retVal = true;
    }
    else
    {
        retVal = false;
    }

    return retVal;
}
