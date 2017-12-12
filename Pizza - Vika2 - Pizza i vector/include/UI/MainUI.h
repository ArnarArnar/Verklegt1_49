#ifndef MAINUI_H
#define MAINUI_H
#include "adminui.h"
#include "salesui.h"
#include "pizzaorder.h"
#include "Pizza.h"
#include "topping.h"
#include "InvalidName.h"
#include <vector>
#include <string>
using namespace std;

class MainUI
{
    public:
        MainUI();
        void welcomeUI();
        void salesUI();
        void bakerUI();
        void deliveryUI();
        void makeOrderUI();
        void makePizzaUI();
        virtual ~MainUI();

    protected:

    private:
};

#endif // MAINUI_H
