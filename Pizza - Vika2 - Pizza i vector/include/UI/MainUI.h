#ifndef MAINUI_H
#define MAINUI_H
#include "../UI/adminui.h"
#include "../UI/salesui.h"
#include "../models/pizzaorder.h"
#include "../models/Pizza.h"
#include "../models/topping.h"
#include "../exceptions/InvalidName.h"
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
