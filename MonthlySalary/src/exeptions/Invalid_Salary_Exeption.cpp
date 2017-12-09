#include "Invalid_Salary_Exeption.h"

Invalid_Salary_exception::Invalid_Salary_exception() {

}

Invalid_Salary_exception::Invalid_Salary_exception (string message) {

    this -> message = message;

}
string Invalid_Salary_exception:: getMessage() {

    return message;
}
bool Invalid_Salary_exception::isValdSalary(double salary) {

    if (salary < 10000 || salary > 500000) {
        return true;
    }
    else  {
        return false;
    }
}
