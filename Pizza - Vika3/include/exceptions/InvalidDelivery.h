#ifndef INVALIDDELIVERY_H
#define INVALIDDELIVERY_H
#include <string>
using namespace std;


class InvalidDelivery
{
   public:
    InvalidDelivery();
    InvalidDelivery (string message);
    string getMessage();
    bool isValdDelivery(char delivery );

private:
    string message;
};

#endif // INVALIDDELIVERY_H
