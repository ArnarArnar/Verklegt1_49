#include "PizzaUI.h"
#include <iostream>
#include "Pizza.h"
using namespace std;
PizzaUI::PizzaUI()
{
    //ctor
}

PizzaUI::~PizzaUI()
{
    //dtor
}

void PizzaUI::startUI() {
    char selection = '\0';


    cout << "m: make pizza" << endl;
    cout << "r: read pizza" << endl;
    cout << "q: quit to menu" << endl;

    cin >> selection;
    if (selection == 'm') {
        int topCnt;

        cout << "How many toppings: ";
        cin >> topCnt;

        Pizza pizza(topCnt);

        for (int i = 0; i < topCnt; i++) {
            Topping topping;
            cin >> topping;
            pizza.addTopping(topping);

        }

        cout << pizza;

        pizzaRepo.storePizza(pizza);
        cout << endl;
    }
    if (selection == 'r') {
        PizzaRepository repo;
        Pizza pizza = pizzaRepo.retrievePizza();
        cout << pizza;
        cout << endl;


    }
    else if (selection == 'q'){
            Welcomescreen welcomescreen;
            welcomescreen.welcomeUI();
    cout << endl;
    }
}
