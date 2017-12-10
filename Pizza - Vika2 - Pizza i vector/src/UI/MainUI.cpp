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
void MainUI::welcomeUI() {
    char selection = '\0';
    bool quit = false;
    while (!quit) {
        cout << "-----------------" << endl;
        cout << "  Pizza World " << endl;
        cout << "-----------------" << endl;
        cout << endl;
        cout << "1: Admin" << endl;
        cout << "2: Salesperson" << endl;
        cout << "3: Baker" << endl;
        cout << "4: Delivery" << endl;
        cout << "0: Quit" << endl;
        cout << endl;

        cout << "Menu: ";
        cin >> selection;

        switch(selection) {
        case '1': {
            cout << "***ADMIN MODE***"<< endl << endl;
            AdminUI adminUI;
            adminUI.AdminMenuUI();
        }
        break;
        case '2': {
            SalesUI salesUI;
            salesUI.SalesMenuUI();
        }
        break;
        case '3': {
            BakerUI bakerUI;
            bakerUI.BakerMenuUI();
        }
        break;
        case '4': {
            DeliveryUI deliveryUI;
            deliveryUI.DeliveryMenuUI();
        }
        break;
        case '0': {
            quit = true;
        }
        break;
        }
    }
}/*
void MainUI::makeOrderUI() {
    char selection = '\0';
    while (selection != 'q') {

        cout << "O: Pizza Order" << endl;
        cout << "W: Write" << endl;
        cout << "R: Read" << endl;
        cout << "Q: Quit" << endl;

        cin >> selection;
        switch(selection) {
        case 'o':
        case 'O': {
            MainUI makePizzaMenu;
            makePizzaMenu.makePizzaUI();
            cout << endl;
        }
        break;

        case 'w':
        case 'W': {

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
void MainUI::makePizzaUI() {
    char selection = '\0';
    cout << "M: Make pizza" << endl;
    cout << "R: Read pizza" << endl;
    cin >> selection;
    switch(selection) {
    case 'm':
    case 'M': {
        int toppingCnt;
        cout << "How many toppings: ";
        cin >> toppingCnt;
        cout << endl;
        ifstream fin;
        string str;
        fin.open("ToppingsList.txt");
        if(fin.is_open()) {
            while(!fin.eof()) {
                getline(fin, str);
                cout << str << endl;
            }
            cout << fin.eof() << endl;
        }
        else {
            cout << "File not open" << endl;
        }
        fin.close();
        Pizza pizza(toppingCnt);
        for (int i = 0; i < toppingCnt; i++) {
            Topping topping;

///            cin >> topping; Removed because it is not vector and in the future would be selected from a list;
            pizza.addTopping(topping);
        }
        cout << pizza;
        //PizzaRepository pizzaRepo;
      //  pizzaRepo.storePizza(pizza);
        cout << endl;
    }
    break;

    case 'r':
    case 'R': {
//        PizzaRepository repo;
  //      Pizza pizza = repo.retrievePizza();
//        cout << pizza;
        cout << endl;
    }
    break;
    }
}
*/
