#include "Baker.h"

Baker::Baker()
{
    //ctor
}

Baker::~Baker()
{
    //dtor
}

void BakerUI::startUI() {
    char selection = '\0';

    while (selection != 'q'){
        cout << "P: Pizza queue" << endl;
        cout << "N: Newest ordered pizza" << endl;
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
