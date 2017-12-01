#include "AdminUI.h"

AdminUI::AdminUI()
{
    //ctor
}

AdminUI::~AdminUI()
{
    //dtor
}
void AdminUI::startUI() {
    char selection = '\0';

    while (selection != 'q') {
        //mun breyta og setja í function. Er skýrara ef þetta er.
        for(int i = 0; i < 50; i++)
        {
            cout << endl;
        }
        cout << "ADMIN MODE"<< endl << endl;
        cout << "S: Change pizza sizes" << endl;
        cout << "T: Edit toppings selection" << endl;
        cout << "M: Edit menu" << endl;
        cout << "I: Edit items for sale" << endl;
        cout << "P: Edit prices" << endl;
        cout << "O: Edit outlets" << endl;
        cout << "Q: quit" << endl;

        cin >> selection;

        if (selection == 'p' || selection == 'P') {
            PizzaUI pizzaui;
            pizzaui.startUI();
            cout << endl;
        }
        if (selection == 's' || selection == 'S') {
            cout << endl;
        }
        if (selection == 's' || selection == 'S') {
            cout << endl;
        }
        if (selection == 'm' || selection == 'M') {
            cout << endl;
        }
        if (selection == 'i' || selection == 'I') {
            cout << endl;
        }
        if (selection == 'p' || selection == 'P') {
            cout << endl;
        }
        if (selection == 'o'  || selection == 'O') {
            cout << endl;
        }
        else if (selection == 'q' || selection == 'Q') {
            Welcomescreen welcomescreen;
            welcomescreen.welcomeUI();
            cout << endl;
        }
    }
}
