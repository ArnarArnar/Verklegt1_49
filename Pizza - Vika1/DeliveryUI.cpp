#include "DeliveryUI.h"

DeliveryUI::DeliveryUI()
{
    //ctor
}

DeliveryUI::~DeliveryUI()
{
    //dtor
}
void DeliveryUI::startUI() {
    char selection = '\0';
    while (selection != 'q'){
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
        cout << "Q: quit to menu" << endl;

        cin >> selection;
        if (selection == 'o' || selection == 'O'){
        cout << endl;
        }
        if (selection == 'l' || selection == 'L'){
        cout << endl;
        }
        if (selection == 'r' || selection == 'R'){
        cout << endl;
        }
        if (selection == 's' || selection == 'S'){
        cout << endl;
        }
        if (selection == 'p' || selection == 'P'){
        cout << endl;
        }
        if (selection == 'f' || selection == 'F'){
        cout << endl;
        }
        else if (selection == 'q' || selection == 'Q'){
            Welcomescreen welcomescreen;
            welcomescreen.welcomeUI();
        cout << endl;
        }
    }
}
