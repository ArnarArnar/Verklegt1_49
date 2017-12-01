#include <iostream>
#include <string>
#include <fstream>
#include "MainUI.h"



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
        if (selection == 'a' || selection == 'A') {
            MainUI adminMenueUI;
            adminMenueUI.adminUI();
        }
        if (selection == 's' || selection == 'S') {
            MainUI salesMenuUI;
            salesMenuUI.salesUI();

        }
        if (selection == 'b' || selection == 'B') {
            MainUI bakerMenuUI;
            bakerMenuUI.bakerUI();
        }
        if (selection == 'd' || selection == 'D') {
            MainUI deliveryMenuUI;
            deliveryMenuUI.deliveryUI();
        }
        else if (selection == 'q' || selection == 'Q') {
            cout << endl;
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
        cout << "S: Change pizza sizes" << endl;
        cout << "T: Edit toppings selection" << endl;
        cout << "M: Edit menu" << endl;
        cout << "I: Edit items for sale" << endl;
        cout << "P: Edit prices" << endl;
        cout << "O: Edit outlets" << endl;
        cout << "Q: quit" << endl;

        cin >> selection;

        if (selection == 'p' || selection == 'P') {
            cout << endl;
        }
        if (selection == 's' || selection == 'S') {
            cout << endl;
        }
        if (selection == 's' || selection == 'S') {
            cout << endl;
        }
        if (selection == 'm' || selection == 'M') {
            cout << endl;
        }
        if (selection == 'i' || selection == 'I') {
            cout << endl;
        }
        if (selection == 'p' || selection == 'P') {
            cout << endl;
        }
        if (selection == 'o'  || selection == 'O') {
            cout << endl;
        }
        else if (selection == 'q' || selection == 'Q') {
            MainUI welcomeMenu;
            welcomeMenu.welcomeUI();
            cout << endl;
        }
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
        cout << "o: Make order" << endl;
        cout << "p: Get price" << endl;
        cout << "d: Delivery or pickup" << endl;
        cout << "n: Notes" << endl;
        cout << "q: quit to menu" << endl;

        cin >> selection;
        if (selection == 'o' || selection == 'O'){
        cout << endl;
        }
        if (selection == 'p' || selection == 'P'){
        cout << endl;
        }
        if (selection == 'b' || selection == 'B'){
        cout << endl;
        }
        if (selection == 'd' || selection == 'D'){
        cout << endl;
        }
        if (selection == 'n' || selection == 'N'){
        cout << endl;
        }
        else if (selection == 'q' || selection == 'Q'){
            MainUI welcomeMenu;
            welcomeMenu.welcomeUI();
        cout << endl;
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
            MainUI welcomeMenu;
            welcomeMenu.welcomeUI();
        cout << endl;
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
        cout << "Q: quit to menu" << endl;

        cin >> selection;
        if (selection == 'o' || selection == 'O'){
        cout << endl;
        }
        if (selection == 'l' || selection == 'L'){
        cout << endl;
        }
        if (selection == 'r' || selection == 'R'){
        cout << endl;
        }
        if (selection == 's' || selection == 'S'){
        cout << endl;
        }
        if (selection == 'p' || selection == 'P'){
        cout << endl;
        }
        if (selection == 'f' || selection == 'F'){
        cout << endl;
        }
        else if (selection == 'q' || selection == 'Q'){
            MainUI welcomeMenu;
            welcomeMenu.welcomeUI();
        cout << endl;
        }
    }
}
void MainUI::startUI(){
    char selection = '\0';

    while (selection != 'q'){

        cout << "p: pizzas" << endl;
        cout << "w: write" << endl;
        cout << "r: read" << endl;
        cout << "q: quit" << endl;

        cin >> selection;
        if (selection == 'p'){
        cout << endl;
        }
        if (selection == 'w'){
        cout << endl;
        }
        else if (selection == 'r'){
        cout << endl;
        }
    }
}
