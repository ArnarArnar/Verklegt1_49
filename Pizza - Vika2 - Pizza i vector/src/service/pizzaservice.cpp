#include "pizzaservice.h"


void PizzaService::FillPizzaVectorService(){

        cout << "Pizza Size" << endl;
        char pizzaSize;
        cin >> pizzaSize;


  //      toppings = listAllToppings();

        Pizza newPizzaOrder(pizzaSize, toppings);
        pizzas.push_back(newPizzaOrder);
}

/*

void PizzaService::ToppingsInOrder (const vector<Pizza>& pizzas) {
    Pizza toppingName;
    for (unsigned int i = 0; i < topping.size(); i++) {
        cout << toppingName.getToppingName();
    }
}

*/
