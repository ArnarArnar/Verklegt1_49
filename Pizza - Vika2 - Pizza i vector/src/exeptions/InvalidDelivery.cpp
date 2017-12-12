#include "InvalidDelivery.h"

InvalidDelivery::InvalidDelivery()
{
    //ctor
}
InvalidDelivery::InvalidDelivery(string message)
{
    this -> message = message;

}
string InvalidDelivery:: getMessage()
{

    return message;
}

bool InvalidDelivery::isValdDelivery(char delivery)
{
    bool retVal;

    if (delivery != '1' && delivery != '2')
    {
        retVal = true;
    }
    else
    {
        retVal = false;
    }

    return retVal;
}
