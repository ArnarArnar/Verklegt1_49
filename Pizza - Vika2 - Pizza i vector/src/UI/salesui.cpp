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
        cout << "2: View order" << endl;
        cout << "3: print " << endl;
        cout << "4: Notes" << endl;
        cout << "Q: Quit to menu" << endl;

        cout << "Menu>Sales: ";
        cin >> selection;
        switch(selection) {
        case '1': {
            Pizza pizza;
            pizza.FillPizzaVector(pizzas);
            cout << endl;
        }
        break;
        case '2': {
           vector<Pizza> order;
        PizzaService pizzaService;
        pizzaService.PrintToScreenPizzaVector(pizzas);
            cout << endl;
        }
        break;
        case '3': {
        PizzaService sendtoTXT;
        sendtoTXT.addNewOrderToTXTService(pizzas);
            cout << endl;
        }
        break;
        case '4': {
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


