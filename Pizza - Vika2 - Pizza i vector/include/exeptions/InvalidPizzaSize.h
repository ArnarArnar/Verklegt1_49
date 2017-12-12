#ifndef INVALIDPIZZASIZE_H
#define INVALIDPIZZASIZE_H
#include <string>
using namespace std;


class InvalidPizzaSize
{
public:
    InvalidPizzaSize();
    InvalidPizzaSize (string message);
    string getMessage();
    bool isValdPizzaSize(char size);

private:
    string message;
};
#endif // INVALIDPIZZASIZE_H
