#include "Invalid_Year_Exeption.h"

Invalid_Year_exception::Invalid_Year_exception () {

}

Invalid_Year_exception::Invalid_Year_exception (string message) {

    this -> message = message;

}
string Invalid_Year_exception:: getMessage() {

    return message;
}
bool Invalid_Year_exception::isValdYear(int year){
        if (year != 2017)
            return true;
        else{
            return false;
        }
}
