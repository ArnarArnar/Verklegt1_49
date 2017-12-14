#include "bakerui.h"

BakerUI::BakerUI()
{
    //ctor
}

void BakerUI::BakerMenuUI()
{
    char selection = '\0';

    while (selection != 'q')
    {
        cout << "BAKERS MENU" << endl << endl;
        cout << "1: List of ordered pizza's - Not ready" << endl;
        cout << "2: Mark as in progress - Not ready" << endl;
        cout << "3: Mark as ready - Not ready" << endl;
        cout << "0: Quit to menu" << endl;
        cout << "Menu>Bakers: ";
        cin >> selection;
        switch(selection)
        {
        case '1':
        {
            PizzaRepository viewOrders;
            viewOrders.viewOrdersInTXT();
            cout << endl;
        }
        break;
        case '2':
        {

            cout << endl;
        }
        break;
        case '3':
        {

            cout << endl;
        }
        break;
        case '0':
        {
            MainUI welcomeMenu;
            welcomeMenu.welcomeUI();
            cout << endl;
        }
        break;
        }
    }
}
