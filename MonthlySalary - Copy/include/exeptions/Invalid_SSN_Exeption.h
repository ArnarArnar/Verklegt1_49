#ifndef Invalid_SSN_Exception_hpp
#define Invalid_SSN_Exception_hpp

#include <stdio.h>
#include <string>
using namespace std;

class Invalid_SSN_exception {

    public:
        Invalid_SSN_exception (string message);
        string getMessage();

    private:
        string message;


};
#endif /* Invalid_SSN_Exception_hpp */
