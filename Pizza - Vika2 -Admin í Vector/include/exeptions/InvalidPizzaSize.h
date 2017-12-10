#ifndef INVALIDPIZZASIZE_H
#define INVALIDPIZZASIZE_H
#include <string>
using namespace std;

class InvalidPizzaSize
{
    public:
        InvalidPizzaSize();
        InvalidPizzaSize(string message);
        string getMessage();

    private:
        string message;
};

#endif // INVALIDPIZZASIZE_H
