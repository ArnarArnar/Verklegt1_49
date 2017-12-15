#include "adminui.h"
#include "PizzaRepository.h"

AdminUI::AdminUI()
{
    //ctor
}

void AdminUI::AdminMenuUI()
{
    char selection = '\0';
    while (selection != 'q')
    {
        cout << "1. View all toppings in vector" << endl;
        cout << "2. Add some toppings" << endl;
        cout << "3: Edit pizza sizes and price" << endl;
        cout << "0: Return to menu" << endl;
        cout << endl;

        cout << "Menu>Admin: ";
        cin >> selection;
        switch (selection)
        {
        case '1':
        {
            toppingVector = toppingService.FillToppingsVectorFromTXTService();
            cout << "Get all toppings" << endl;
            toppingService.printToppingsToScreenFromVector(toppingVector);
        }
        break;
        case '2':
        {
            ToppingService add;
            add.addToppingsVector(toppingVector);
            ToppingRepository toppRepo2;
            toppRepo2.storeAllToppings(toppingVector);
        }
        break;
        case '3':
        {
            PizzaRepository size_price;
            size_price.set_size_price();
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
