#ifndef Invalid_Month_Exeption_hpp
#define Invalid_Month_Exeption_hpp

#include <stdio.h>
#include <string>
using namespace std;

class Invalid_Month_exception {

public:
    Invalid_Month_exception (string message);
    string getMessage();

private:
    string message;

};

#endif /* Invalid_Month_Exeption_hpp */
