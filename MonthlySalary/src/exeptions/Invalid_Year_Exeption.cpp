#include "Invalid_Year_Exeption.h"

Invalid_Year_exception::Invalid_Year_exception (string message) {

    this -> message = message;

}
string Invalid_Year_exception:: getMessage() {

    return message;
}

