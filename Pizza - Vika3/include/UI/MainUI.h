#ifndef MAINUI_H
#define MAINUI_H
#include "adminui.h"

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
