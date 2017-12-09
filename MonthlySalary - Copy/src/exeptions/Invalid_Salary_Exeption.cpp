#include "Invalid_Salary_Exeption.h"

Invalid_Salary_exception::Invalid_Salary_exception (string message) {

    this -> message = message;

}
string Invalid_Salary_exception:: getMessage() {

    return message;
}
