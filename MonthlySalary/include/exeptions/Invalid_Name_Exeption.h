
#define Invalid_Name_Exception_hpp
#include <stdio.h>
#include <string>
using namespace std;

class Invalid_Name_exception {

public:
    Invalid_Name_exception();
    Invalid_Name_exception (string message);
    string getMessage();
    bool isValdName(string name);

private:
    string message;

};
