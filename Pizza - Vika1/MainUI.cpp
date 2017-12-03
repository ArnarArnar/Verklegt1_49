#include <iostream>
#include <string>
#include <fstream>
#include "MainUI.h"
#include "Pizza.h"
#include "PizzaRepository.h"
#include "Topping.h"

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

    while (selection != 'q') {
        cout << "-----------------" << endl;
        cout << "  Pizza World " << endl;
        cout << "-----------------" << endl;
        cout << endl;


        cout << "A: Admin" << endl;
        cout << "S: Salesperson" << endl;
        cout << "B: Baker" << endl;
        cout << "D: Delivery" << endl;
        cout << "Q: Quit" << endl;

        cin >> selection;
        switch(selection){
            case 'a':
            case 'A':{
                MainUI adminMenuUI;
                adminMenuUI.adminUI();
                }break;

            case 's':
            case 'S':{
                MainUI salesMenuUI;
                salesMenuUI.salesUI();
                }break;

            case 'b':
            case 'B':{
                MainUI bakerMenuUI;
                bakerMenuUI.bakerUI();
                }break;

            case 'd':
            case 'D':{
                MainUI deliveryMenuUI;
                deliveryMenuUI.deliveryUI();
                }break;

            case 'q':
            case 'Q':{
                cout << endl;
                }break;

        }
    }
}
void MainUI::adminUI() {
    char selection = '\0';

    while (selection != 'q') {
        //mun breyta og setja í function. Er skýrara ef þetta er.
        for(int i = 0; i < 50; i++)
        {
            cout << endl;
        }
        cout << "ADMIN MODE"<< endl << endl;
        cout << "S: Edit pizza sizes and price" << endl;
        cout << "T: Edit toppings selection" << endl;
        cout << "M: Edit menu" << endl;
        cout << "I: Edit items for sale" << endl;
        cout << "P: Edit prices" << endl;
        cout << "O: Edit outlets" << endl;
        cout << "Q: Quit" << endl;

        cin >> selection;
        switch (selection){
            case 's':
            case 'S':{
                PizzaRepository pizzaRepository;
                pizzaRepository.start();
                cout << endl;
                }break;

            case 't':
            case 'T':{
                Topping topping;
                topping.start();
                cout << endl;
                }break;

            case 'm':
            case 'M':{
                cout << endl;
                }break;


            case 'i':
            case 'I':{
                cout << endl;
                }break;


            case 'p':
            case 'P':{
                cout << endl;
                }break;


            case 'o':
            case 'O':{
                cout << endl;
                }break;


            case 'q':
            case 'Q':{}
                MainUI welcomeMenu;
                welcomeMenu.welcomeUI();
                cout << endl;
                }break;
        }
    }

void MainUI::salesUI() {
    char selection = '\0';
    while (selection != 'q'){
        //mun breyta og setja í function. Er skýrara ef þetta er.
        for(int i = 0; i < 50; i++)
        {
            cout << endl;
        }
        cout << "SALES MENU" << endl << endl;
        cout << "O: Make order" << endl;
        cout << "P: Get price" << endl;
        cout << "D: Delivery or pickup" << endl;
        cout << "N: Notes" << endl;
        cout << "Q: Quit to menu" << endl;

        cin >> selection;
        switch(selection){
            case 'o':
            case 'O':{
                MainUI makeOrderMenu;
                makeOrderMenu.makeOrderUI();
                cout << endl;
                }break;

            case 'p':
            case 'P':{

                cout << endl;
                }break;

            case 'b':
            case 'B':{

                cout << endl;
                }break;

            case 'd':
            case 'D':{

                cout << endl;
                }break;

            case 'n':
            case 'N':{

                cout << endl;
                }break;

            case 'q':
            case 'Q':{
                MainUI welcomeMenu;
                welcomeMenu.welcomeUI();
                cout << endl;
                }break;
        }
    }
}
void MainUI::bakerUI() {
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
        cout << "S: Mark as in progress" << endl;
        cout << "R: Mark as ready" << endl;
        cout << "Q: Quit to menu" << endl;

        cin >> selection;
        switch(selection){
            case 'p':
            case 'P':{

                cout << endl;
                }break;

            case 'n':
            case 'N':{

                cout << endl;
                }break;

            case 's':
            case 'S':{

                cout << endl;
                }break;

            case 'r':
            case 'R':{

                cout << endl;
                }break;

            case 'q':
            case 'Q':{
                MainUI welcomeMenu;
                welcomeMenu.welcomeUI();
                cout << endl;
                }break;
        }
    }
}
void MainUI::deliveryUI() {
    char selection = '\0';
    while (selection != 'q'){
            //mun breyta og setja í function. Er skýrara ef þetta er.
            for(int i = 0; i < 50; i++)
            {
                cout << endl;
            }
        cout << "DELIVERY MENU" << endl << endl;
        cout << "O: Select outlet" << endl;
        cout << "L: List of ordered pizza's" << endl;
        cout << "R: List of ready pizza's" << endl;
        cout << "S: Search orders" << endl;
        cout << "P: Mark order as payed" << endl;
        cout << "F: Mark order as finished" << endl;
        cout << "Q: Quit to menu" << endl;

        cin >> selection;
        switch(selection){
            case 'o':
            case 'O':{

                cout << endl;
                }break;

            case 'l':
            case 'L':{

                cout << endl;
                }break;

            case 'r':
            case 'R':{

                cout << endl;
                }break;

            case 's':
            case 'S':{

                cout << endl;
                }break;

            case 'p':
            case 'P':{

                cout << endl;
                }break;

            case 'f':
            case 'F':{

                cout << endl;
                }break;

            case 'q':
            case 'Q':{
                MainUI welcomeMenu;
                welcomeMenu.welcomeUI();
                cout << endl;
                }break;
        }
    }
}
void MainUI::makeOrderUI(){
    char selection = '\0';
    while (selection != 'q'){

        cout << "O: Pizza Order" << endl;
        cout << "W: Write" << endl;
        cout << "R: Read" << endl;
        cout << "Q: Quit" << endl;

        cin >> selection;
        switch(selection){
            case 'o':
            case 'O':{
                MainUI makePizzaMenu;
                makePizzaMenu.makePizzaUI();
                cout << endl;
                }break;

            case 'w':
            case 'W':{

                cout << endl;
                }break;
            case 'r':
            case 'R':{

                cout << endl;
                }break;

            case 'q':
            case 'Q':{
                MainUI welcomeMenu;
                welcomeMenu.welcomeUI();
                cout << endl;
                }break;
        }
    }
}
void MainUI::makePizzaUI(){
    char selection = '\0';
    cout << "M: Make pizza" << endl;
    cout << "R: Read pizza" << endl;
    cin >> selection;
    switch(selection){
            case 'm':
            case 'M':{
                int toppingCnt;
                cout << "How many toppings: ";
                cin >> toppingCnt;
                Pizza pizza(toppingCnt);
                    for (int i = 0; i < toppingCnt; i++) {
                    Topping topping;
                    cin >> topping;
                    pizza.addTopping(topping);
                    }
                cout << pizza;
                PizzaRepository pizzaRepo;
                pizzaRepo.storePizza(pizza);
                cout << endl;
                }break;

            case 'r':
            case 'R':{
                PizzaRepository repo;
                Pizza pizza = repo.retrievePizza();
                cout << pizza;
                cout << endl;
                }break;
    }
}
