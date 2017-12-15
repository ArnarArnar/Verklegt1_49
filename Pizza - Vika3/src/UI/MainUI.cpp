#include <iostream>
#include <string>
#include <fstream>
#include "MainUI.h"
#include "Pizza.h"
#include "salesui.h"
#include "bakerui.h"
#include "deliveryui.h"

using namespace std;
MainUI::MainUI()
{
    //ctor
}
MainUI::~MainUI()
{
    //dtor
}
void MainUI::welcomeUI()
{
    char selection = '\0';
    bool quit = false;
    while (!quit)
    {
        cout << "-----------------" << endl;
        cout << "  Pizza World " << endl;
        cout << "-----------------" << endl;
        cout << endl;
        cout << "1: Admin" << endl;
        cout << "2: Salesperson" << endl;
        cout << "3: Baker" << endl;
      //cout << "4: Delivery" << endl;
        cout << "0: Quit" << endl;
        cout << endl;

        cout << "Menu: ";
        cin >> selection;

        switch(selection)
        {
        case '1':
        {
            cout << "***ADMIN MODE***"<< endl << endl;
            AdminUI adminUI;
            adminUI.AdminMenuUI();
        }
        break;
        case '2':
        {
            SalesUI salesUI;
            salesUI.SalesMenuUI();
        }
        break;
        case '3':
        {
            BakerUI bakerUI;
            bakerUI.BakerMenuUI();
        }
        break;
        case '4':
        {
            DeliveryUI deliveryUI;
            deliveryUI.DeliveryMenuUI();
        }
        break;
        case '0':
        {
            quit = true;
        }
        break;
        }
    }
}
