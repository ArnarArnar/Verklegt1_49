#ifndef MAINUI_H
#define MAINUI_H
#include "topping.h"
#include "toppingservice.h"

class MainUI
{
    public:
        MainUI();
        void welcomeUI();
        void adminUI();
        void salesUI();
        void bakerUI();
        void deliveryUI();
        void makeOrderUI();
        void makePizzaUI();
        virtual ~MainUI();

    protected:
        ToppingService toppingService;
        vector<Topping> toppingVector;
    private:
};

#endif // MAINUI_H
