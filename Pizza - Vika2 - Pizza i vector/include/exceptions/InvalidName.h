#ifndef INVALIDNAME_H
#define INVALIDNAME_H
#include <string>
using namespace std;

class InvalidName
{
public:
    InvalidName();
    InvalidName (string message);
    string getMessage();
    bool isValdName(string name);

private:
    string message;
};
#endif // INVALIDNAME_H
