#include "orderui.h"

OrderUI::OrderUI()
{
    //ctor
}

void OrderUI::OrderMenuUI() {
    char selection = '\0';
    while (selection != 'q') {
        cout << "Menu>Sales>Make Order: ";
        cin >> selection;
        switch(selection) {
        case '1': {
            MainUI makePizzaMenu;
            makePizzaMenu.makePizzaUI();
            cout << endl;
        }
        break;
        case '2': {
            cout << endl;
        }
        break;
        case '3': {
            cout << endl;
        }
        break;
        case '0': {
            MainUI welcomeMenu;
            welcomeMenu.welcomeUI();
            cout << endl;
        }
        break;
        }
    }
}
