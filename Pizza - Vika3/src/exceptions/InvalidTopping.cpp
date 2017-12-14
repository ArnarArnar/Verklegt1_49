#include "InvalidTopping.h"

InvalidTopping::InvalidTopping()
{
    //ctor
}

InvalidTopping::InvalidTopping(string message)
{
    this -> message = message;

}
string InvalidTopping:: getMessage() {

    return message;
}

bool InvalidTopping::isValdTopping(string topping) {
    bool retVal = false;
    if (topping.size() == 10 && !topping.empty())
        for (unsigned int i = 0; i <= topping.size(); i++) {
            if (!isdigit(topping[i])) {
                retVal = true;
            }
        }
    else{
        return false;
    }
    return retVal;
}
