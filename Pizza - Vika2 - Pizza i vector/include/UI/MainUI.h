#ifndef MAINUI_H
#define MAINUI_H
#include "adminui.h"
#include "salesui.h"
//#include "../models/pizzaorder.h"
//#include "../models/Pizza.h"
//#include "../models/topping.h"
#include "../exceptions/InvalidName.h"
#include <vector>
#include <string>
using namespace std;

class MainUI
{
    public:
        MainUI();
        void welcomeUI();
        //void salesUI();
        //void bakerUI();
        //void deliveryUI();
        void makeOrderUI();
        void makePizzaUI();


    private:
        SalesUI salesUI;
        AdminUI adminUI;
};

#endif // MAINUI_H
