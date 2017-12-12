#include "deliveryui.h"

DeliveryUI::DeliveryUI()
{
    //ctor
}

void DeliveryUI::DeliveryMenuUI() {
    char selection = '\0';
    while (selection != 'q') {
        cout << "DELIVERY MENU" << endl << endl;
        cout << "1: List of ready pizza's - Not ready" << endl;
        cout << "2: Mark order as 'on the way' - Not ready" << endl;
        cout << "0: Quit to menu" << endl;
        cout << "Menu>Delivery: ";
        cin >> selection;
        switch(selection) {
        case '1': {

            cout << endl;
        }
        break;
        case '2': {

            cout << endl;
        }
        case '0': {
            MainUI welcomeMenu;
            welcomeMenu.welcomeUI();
            cout << endl;
        }
        break;
        }
    }
}

