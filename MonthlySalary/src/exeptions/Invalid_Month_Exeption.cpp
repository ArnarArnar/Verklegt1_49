#include "Invalid_Month_Exeption.h"

Invalid_Month_exception::Invalid_Month_exception(){

}

Invalid_Month_exception::Invalid_Month_exception (string message) {

    this -> message = message;

}
string Invalid_Month_exception:: getMessage() {

    return message;
}

bool Invalid_Month_exception::isValdMonth(int month){
        if (month < 1 || month > 12)
            return true;
        else{
            return false;
        }
}
