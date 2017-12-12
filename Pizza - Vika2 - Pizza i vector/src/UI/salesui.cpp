#include "salesui.h"

SalesUI::SalesUI()
{
    //ctor
}

void SalesUI::SalesMenuUI() {
    char selection = '\0';
    while (selection != 'q') {
        cout << "SALES MENU" << endl << endl;
        cout << "1: Make order" << endl;
        cout << "2: View newest order" << endl;
        cout << "3: test: print order to TXT " << endl;
        cout << "4: List of ready pizza's - Not ready" << endl;
        cout << "5: Search orders - Not ready" << endl;
        cout << "6: Mark order as payed - Not ready" << endl;
        cout << "0: Quit to menu" << endl;

        cout << "Menu>Sales: ";
        cin >> selection;
        switch(selection) {
        case '1': {
            PizzaOrder newpizza;
//            newpizza.FillPizzaOrderVector(pizzaOrders);
            cout << endl;
        }
        break;
        case '2': {
    //    vector<Pizza> order;
    //    PizzaService pizzaService;
    //    pizzaService.PrintToScreenPizzaVector(pizzas);
            cout << endl;
        }
        break;
        case '3': {
     //   PizzaService sendtoTXT;
      //  sendtoTXT.addNewOrderToTXTService(pizzas);
            cout << endl;
        }
        break;
        case '4': {
            Pizza pizzatest;
//            pizzatest.FillPizzaVector(pizzas);
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


void SalesUI::OrderUI() {
    char selection = '\0';
    while (selection != 'q') {
        cout << "Menu>Sales>Make Order: ";
        cin >> selection;
        switch(selection) {
        case '1': {

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


