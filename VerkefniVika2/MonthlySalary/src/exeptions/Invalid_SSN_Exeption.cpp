#include "Invalid_SSN_Exeption.h"

Invalid_SSN_exception::Invalid_SSN_exception() {

}

Invalid_SSN_exception::Invalid_SSN_exception (string message) {

    this -> message = message;

}
string Invalid_SSN_exception:: getMessage() {

    return message;
}
bool Invalid_SSN_exception::isValdSSN(string ssn) {
    bool retVal = false;
    if (ssn.size() == 10 && !ssn.empty())
        for (unsigned int i = 0; i <= ssn.size(); i++) {
            if (!isdigit(ssn[i])) {
                retVal = true;
            }
        }
    else{
        return false;
    }
    return retVal;
}
