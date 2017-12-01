#include "BakerUI.h"
#include <string>
#include <iostream>
using namespace std;

BakerUI::BakerUI()
{
    //ctor
}

BakerUI::~BakerUI()
{
    //dtor
}
void BakerUI::startUI() {
    char selection = '\0';

    while (selection != 'q'){
        //mun breyta og setja í function. Er skýrara ef þetta er.
        for(int i = 0; i < 50; i++)
        {
            cout << endl;
        }
        cout << "BAKERS MENU" << endl << endl;
        cout << "P: Pizza queue" << endl;
        cout << "N: List of ordered pizza's" << endl;
        cout << "P: Mark as in progress" << endl;
        cout << "R: Mark as ready" << endl;
        cout << "q: quit to menu" << endl;

        cin >> selection;
        if (selection == 'p' || selection == 'P'){
        cout << endl;
        }
        if (selection == 'n' || selection == 'N'){
        cout << endl;
        }
        if (selection == 'p' || selection == 'P'){
        cout << endl;
        }
        if (selection == 'r' || selection == 'R'){
        cout << endl;
        }
        else if (selection == 'q' || selection == 'Q'){
            Welcomescreen welcomescreen;
            welcomescreen.welcomeUI();
        cout << endl;
        }
    }
}
