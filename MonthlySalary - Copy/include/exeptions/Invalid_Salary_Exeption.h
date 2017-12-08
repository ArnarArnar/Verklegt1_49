
#define Invalid_Salary_Exception_h

#include <stdio.h>
#include <string>
using namespace std;

class Invalid_Salary_exception {

public:
    Invalid_Salary_exception (string message);
    string getMessage();

private:
    string message;

};
