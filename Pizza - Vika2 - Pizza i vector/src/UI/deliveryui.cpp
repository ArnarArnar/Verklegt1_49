#include "deliveryui.h"

DeliveryUI::DeliveryUI()
{
    //ctor
}

void DeliveryUI::DeliveryMenuUI() {
    char selection = '\0';
    while (selection != 'q') {
        //mun breyta og setja í function. Er skýrara ef þetta er.
        for(int i = 0; i < 50; i++)
        {
            cout << endl;
        }
        cout << "DELIVERY MENU" << endl << endl;
        cout << "O: Select outlet" << endl;
        cout << "L: List of ordered pizza's" << endl;
        cout << "R: List of ready pizza's" << endl;
        cout << "S: Search orders" << endl;
        cout << "P: Mark order as payed" << endl;
        cout << "F: Mark order as finished" << endl;
        cout << "Q: Quit to menu" << endl;

        cin >> selection;
        switch(selection) {
        case 'o':
        case 'O': {

            cout << endl;
        }
        break;

        case 'l':
        case 'L': {

            cout << endl;
        }
        break;

        case 'r':
        case 'R': {

            cout << endl;
        }
        break;

        case 's':
        case 'S': {

            cout << endl;
        }
        break;

        case 'p':
        case 'P': {

            cout << endl;
        }
        break;

        case 'f':
        case 'F': {

            cout << endl;
        }
        break;

        case 'q':
        case 'Q': {
            MainUI welcomeMenu;
            welcomeMenu.welcomeUI();
            cout << endl;
        }
        break;
        }
    }
}
