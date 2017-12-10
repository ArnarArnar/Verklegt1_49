#ifndef ADMINUI_H
#define ADMINUI_H
#include "topping.h"
#include "toppingservice.h"
#include "MainUI.h"

class AdminUI
{
    public:
        AdminUI();
        void AdminMenuUI();

    private:
        ToppingService toppingService;
        vector<Topping> toppingVector;
};

#endif // ADMINUI_H
