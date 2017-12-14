#ifndef INVALIDTOPPING_H
#define INVALIDTOPPING_H
#include <string>
using namespace std;

class InvalidTopping
{
public:
    InvalidTopping();
    InvalidTopping (string message);
    string getMessage();
    bool isValdTopping(string topping);

private:
    string message;
};

#endif // INVALIDTOPPING_H
