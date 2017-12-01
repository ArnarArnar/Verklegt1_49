#ifndef WELCOMESCREEN_H
#define WELCOMESCREEN_H
#include <string>
#include <iostream>
#include "AdminUI.h"
#include "MainUI.h"
#include "BakerUI.h"
#include "DeliveryUI.h"
using namespace std;

class Welcomescreen
{
    public:
        Welcomescreen();
        virtual ~Welcomescreen();
        void welcomeUI();
        void clearScreen();


    protected:

    private:
};

#endif // WELCOMESCREEN_H
