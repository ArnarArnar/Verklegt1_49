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
vector<Topping> PizzaService::listAllToppings()
{
    ToppingRepository toppRepo;
    Topping toppingAdd;
    vector<Topping> toppingToSelectFrom = toppRepo.FillToppingsVectorFromTXT();
    int toppingSelection = -1;
    while (toppingSelection != 0)
    {
        cout << "Please enter id for toppings to add (0 to quit)" << endl;
        for (size_t i = 0; i < toppingToSelectFrom.size(); i++)
        {
            cout << "[" << i+1 << "] " << toppingToSelectFrom[i].name << endl;
        }
        cout << "Menu>Sales>Order: ";
        cin >> toppingSelection;
        while(cin.fail())
        {
        cin.clear(); //clear input buffer to restore cin to a usable state
        cin.ignore(INT_MAX, '\n'); //ignore last input
        cout << "you can only enter numbers" << endl;
        cout << "Menu>Sales>Order: ";
        cin >> toppingSelection;
        }
    Topping topping;

        if (toppingSelection > 0 && toppingSelection <= (int)toppingToSelectFrom.size())
        {
            toppingAdd.addTopping(toppingToSelectFrom[toppingSelection-1]);
        }
    }
    return toppingToSelectFrom;
}
*/

/*
void PizzaService::ToppingsInOrder (const vector<Pizza>& pizzas) {
    Pizza toppingName;
    for (unsigned int i = 0; i < topping.size(); i++) {
        cout << toppingName.getToppingName();
    }
}

*/
