
#define Invalid_Salary_Exception_h

#include <stdio.h>
#include <string>
using namespace std;

class Invalid_Salary_exception {

public:
    Invalid_Salary_exception();
    Invalid_Salary_exception (string message);
    string getMessage();
    bool isValdSalary(double salary);


private:
    string message;

};
