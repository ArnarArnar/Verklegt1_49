#include "pizzaservice.h"

PizzaService::PizzaService()
{

}
/*
void PizzaService::FillPizzaVector(vector<Pizza>& pizzaOrder){

        string costumerName;
        cin >> costumerName;
        string pizzaSize;
        cin >> pizzaSize;
        int pickup;
        cin >> pickup;
        double pizzaPrice;
        cin >> pizzaPrice;

        Pizza newPizzaOrder(costumerName, pizzaSize,  pickup, pizzaPrice);
        pizzaOrder.push_back(newPizzaOrder);
}
*/
void PizzaService::PrintToScreenPizzaVector (const vector<Pizza>& pizzaOrder)
{
    size_t vectorSize = pizzaOrder.size();
    for(size_t i = 0; i < vectorSize; i++)
    {
        cout << "Costumer Name: " << pizzaOrder[i].getCostumerName() << endl;
        switch (pizzaOrder[i].getPizzaSize())
        {
        case '1':
        {
            cout << "Pizza Size:    Small" << endl;
        }
        break;
        case '2':
        {
            cout << "Pizza Size:    Medium" << endl;
        }
        break;
        case '3':
        {
            cout << "Pizza Size:    Large" << endl;
        }
        break;
        }
        cout << "Pizza Size:    " << pizzaOrder[i].getPizzaSize() << endl;
        cout << "Topping:       Virkni ekki tilbúin" << endl;
        if (pizzaOrder[i].getDelivery() == '1')
        {
            cout << "Delivery:      YES" << endl;
            cout << "Address:       " << pizzaOrder[i].getAddress() << endl;
        }
        else
        {
            cout << "Delivery:      NO" << endl;
        }
        if (pizzaOrder[i].getNotes() != "")
        {
            cout << pizzaOrder[i].getNotes() << endl;
        }

        cout << "PizzaPrice:    " << pizzaOrder[i].getPizzaPrice() << endl;
    }
}
/*
void PizzaService::ToppingsInOrder (const vector<Topping>& topping) {
    Pizza toppingName;
    for (unsigned int i = 0; i < topping.size(); i++) {
        cout << toppingName.getToppingName();
    }
}
*/

void PizzaService::addNewOrderToTXTService(vector<Pizza>& pizzaOrder)
{
    PizzaRepository pizzaRepo;
    pizzaRepo.addNewOrderToTXT(pizzaOrder);


}

