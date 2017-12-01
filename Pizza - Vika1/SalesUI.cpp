#include "SalesUI.h"

SalesUI::SalesUI()
{
    //ctor
}

SalesUI::~SalesUI()
{
    //dtor
}

void SalesUI::startUI() {
    char selection = '\0';

    while (selection != 'q'){
        //mun breyta og setja í function. Er skýrara ef þetta er.
        for(int i = 0; i < 50; i++)
        {
            cout << endl;
        }
        cout << "SALES MENU" << endl << endl;
        cout << "o: Make order" << endl;
        cout << "p: Get price" << endl;
        cout << "d: Delivery or pickup" << endl;
        cout << "n: Notes" << endl;
        cout << "q: quit to menu" << endl;

        cin >> selection;
        if (selection == 'o' || selection == 'O'){
        cout << endl;
        }
        if (selection == 'p' || selection == 'P'){
        cout << endl;
        }
        if (selection == 'b' || selection == 'B'){
        cout << endl;
        }
        if (selection == 'd' || selection == 'D'){
        cout << endl;
        }
        if (selection == 'n' || selection == 'N'){
        cout << endl;
        }
        else if (selection == 'q' || selection == 'Q'){
            Welcomescreen welcomescreen;
            welcomescreen.welcomeUI();
        cout << endl;
        }
    }
}

