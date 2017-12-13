#ifndef ADMINUI_H
#define ADMINUI_H
#include "../models/topping.h"
#include "../UI/MainUI.h"


class AdminUI
{
    public:
        AdminUI();
        void AdminMenuUI();

    private:
        vector<Topping>& toppingVector;
};

#endif // ADMINUI_H
