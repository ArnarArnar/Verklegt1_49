#include "Invalid_Name_Exeption.h"


Invalid_Name_exception::Invalid_Name_exception (string message) {

    this -> message = message;

}
string Invalid_Name_exception:: getMessage() {

    return message;
}
