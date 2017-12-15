#include "pizzaservice.h"

PizzaService::PizzaService()
{

}

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
        cout << "Topping: " << endl;
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

void PizzaService::addNewOrderToTXTService(vector<Pizza>& pizzaOrder)
{
    PizzaRepository pizzaRepo;
    pizzaRepo.addNewOrderToTXT(pizzaOrder);
}

