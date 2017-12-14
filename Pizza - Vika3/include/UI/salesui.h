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
    void SendtoService(); ///henda út falli. Setti inn vegna þess að ég get ekki linkað beint inn í PizzaService frá Pizza.
private:
//        PizzaService pizzaService;
    vector<Pizza> pizzas;


};

#endif // SALESUI_H
