#include "Invalid_SSN_Exeption.h"


Invalid_SSN_exception::Invalid_SSN_exception (string message) {

    this -> message = message;

}
string Invalid_SSN_exception:: getMessage() {

    return message;
}
