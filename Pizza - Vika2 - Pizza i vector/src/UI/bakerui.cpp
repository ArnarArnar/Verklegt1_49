#include "bakerui.h"

BakerUI::BakerUI()
{
    //ctor
}

void BakerUI::BakerMenuUI() {
    char selection = '\0';

    while (selection != 'q') {
        //mun breyta og setja í function. Er skýrara ef þetta er.
        for(int i = 0; i < 50; i++)
        {
            cout << endl;
        }
        cout << "BAKERS MENU" << endl << endl;
        cout << "P: Pizza queue" << endl;
        cout << "N: List of ordered pizza's" << endl;
        cout << "S: Mark as in progress" << endl;
        cout << "R: Mark as ready" << endl;
        cout << "Q: Quit to menu" << endl;

        cin >> selection;
        switch(selection) {
        case 'p':
        case 'P': {
            cout << endl;
        }
        break;

        case 'n':
        case 'N': {

            cout << endl;
        }
        break;

        case 's':
        case 'S': {

            cout << endl;
        }
        break;

        case 'r':
        case 'R': {

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
