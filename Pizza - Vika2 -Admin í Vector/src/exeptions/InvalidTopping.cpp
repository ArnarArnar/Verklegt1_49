#include "InvalidTopping.h"

InvalidTopping::InvalidTopping()
{
    //ctor
}

InvalidTopping::InvalidTopping(string message)
{
    this-> message = message;
}

string InvalidTopping::getMessage()
{
    return message;
}
