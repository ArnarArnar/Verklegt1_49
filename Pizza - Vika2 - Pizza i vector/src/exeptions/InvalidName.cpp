#include "InvalidName.h"

InvalidName::InvalidName()
{
    //ctor
}

InvalidName::InvalidName(string message)
{
    this -> message = message;

}
string InvalidName:: getMessage()
{

    return message;
}

bool InvalidName::isValdName(string name)
{
    bool retVal = false;
    for (unsigned int i = 0; i < name.size(); i++)
    {
        if (!isalpha(name[i]) && !isspace(name[i]))
        {
            retVal = true;
        }
    }

    return retVal;
}
