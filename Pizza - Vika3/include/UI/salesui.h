#ifndef SALESUI_H
#define SALESUI_H
//#include <iostream>
//#include <vector>
#include "pizzaservice.h"
#include "MainUI.h"
#include "Pizza.h"



class SalesUI
{
public:
    SalesUI();
    void SalesMenuUI();
    void OrderUI();
    void SendtoService(); ///henda �t falli. Setti inn vegna �ess a� �g get ekki linka� beint inn � PizzaService fr� Pizza.
private:
//        PizzaService pizzaService;
    vector<Pizza> pizzas;


};

#endif // SALESUI_H
