#include "salesui.h"

SalesUI::SalesUI()
{
    //ctor
}

void SalesUI::SalesMenuUI()
{
    char selection = '\0';
    while (selection != 'q')
    {
        cout << "SALES MENU" << endl << endl;
        cout << "1: Make order" << endl;
        cout << "2: View newest order" << endl;
        cout << "0: Quit to menu" << endl;
        cout << "Menu>Sales: ";
        cin >> selection;
        switch(selection)
        {
        case '1':
        {
            Pizza pizza;
            pizza.FillPizzaVector(pizzas);
            cout << endl;
            PizzaService sendtoTXT;
            sendtoTXT.addNewOrderToTXTService(pizzas);
            cout << endl;
        }
        break;
        case '2':
        {
            vector<Pizza> order;
            PizzaService pizzaService;
            pizzaService.PrintToScreenPizzaVector(pizzas);
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

