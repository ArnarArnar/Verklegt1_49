#include "Welcomescreen.h"
#include "SalesUI.h"
Welcomescreen::Welcomescreen()
{
    //ctor
}

Welcomescreen::~Welcomescreen()
{
    //dtor
}
void Welcomescreen::welcomeUI() {
    char selection = '\0';

    while (selection != 'q') {
        clearScreen();
        cout << "-----------------" << endl;
        cout << "  Pizza World " << endl;
        cout << "-----------------" << endl;
        cout << endl;


        cout << "A: Admin" << endl;
        cout << "S: Salesperson" << endl;
        cout << "B: Baker" << endl;
        cout << "D: Delivery" << endl;
        cout << "Q: Quit" << endl;

        cin >> selection;
        if (selection == 'a' || selection == 'A') {
            AdminUI adminUI;
            adminUI.startUI();
        }
        if (selection == 's' || selection == 'S') {
            SalesUI salesUI;
            salesUI.startUI();

        }
        if (selection == 'b' || selection == 'B') {
            BakerUI bakerUI;
            bakerUI.startUI();
        }
        if (selection == 'd' || selection == 'D') {
            DeliveryUI deliveryUI;
            deliveryUI.startUI();
        }
        else if (selection == 'q' || selection == 'Q') {
            cout << endl;
        }
    }
}

void Welcomescreen::clearScreen()
{
    for(int i = 0; i < 50; i++)
    {
        cout << endl;
    }
}
