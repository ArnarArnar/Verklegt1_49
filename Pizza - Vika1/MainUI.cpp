#include <iostream>
#include <string>
#include <fstream>
#include "MainUI.h"
#include "Pizzaui.h"
#include "Welcomescreen.h"
using namespace std;

///Held að við munum henda þessum klasa út að lokum en hef hann inni í bili. -Arnar

MainUI::MainUI()
{
    //ctor
}

MainUI::~MainUI()
{
    //dtor
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
            PizzaUI pizzaui;
            pizzaui.startUI();
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
