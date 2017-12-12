#include "pizzaorder.h"

PizzaOrder::PizzaOrder()
{
    //ctor
}

PizzaOrder::PizzaOrder(string costumerName, char delivery, string address, double pizzaPrice, string notes, char inTheOven, char ready, char payed)
{
    this-> costumerName = costumerName;
    this-> delivery = delivery;
    this-> address = address;
    this-> pizzaPrice = pizzaPrice;
    this-> notes = notes;
    this-> inTheOven = inTheOven;
    this-> ready = ready;
    this-> payed = payed;
    this-> notes = notes;
    this-> inTheOven = inTheOven;
    this-> ready = ready;
    this-> payed = payed;

}
string PizzaOrder::getCostumerName() const
{
    return this->costumerName;
}
char PizzaOrder::getDelivery() const
{
    return this->delivery;
}
string PizzaOrder::getAddress() const
{
    return this->address;
}
double PizzaOrder::getPizzaPrice() const
{
    return this->pizzaPrice;
}
string PizzaOrder:: getNotes() const
{
    return this->notes;
}
char PizzaOrder::getInTheOven() const
{
    return this->inTheOven;
}
char PizzaOrder::GetReady() const
{
    return this->ready;
}
char PizzaOrder::GetPayed() const
{
    return this->payed;
}

void PizzaOrder::FillPizzaOrderVector(vector<PizzaOrder>& newOrders)
{
    string costumerName = "";
    char delivery = '0';
    string address = "";
    pizzaPrice = 0.0;
    string notes = "";
    char inTheOven = '0';
    char ready = '0';
    char payed = '0';
    char youWantToAddNote = '0';

    //char confirm = '0';
    cout << endl;
    cout << "Costumer name: " << endl;
    cout << "Menu>Sales>Order: ";
    cin >> ws;
    getline(cin, costumerName);
    InvalidName CheckIfValidName;
    while (CheckIfValidName.isValdName(costumerName))
    {
        try
        {
            while (CheckIfValidName.isValdName(costumerName))
            {
                throw InvalidName("That is not a valid name");
            }
        }
        catch (InvalidName e)
        {
            cout << endl;
            cout << e.getMessage() << endl << endl;
            cout << "Costumer name: " << endl;
            cin >> ws;
            getline(cin, costumerName);
        }
    }

    cout << endl;
    cout << endl << "do you want delivery?" << endl;
    cout << "1: YES" << endl;
    cout << "2: NO" << endl;
    cout << "Menu>Sales>Order: ";
    cin >> delivery;
    if (delivery == '1')
    {
        cout << endl << "Please enter a delivery address: " << endl;
        cout << "Menu>Sales>Order: ";
        cin >> ws;
        getline(cin, address);
    }

    cout << endl << "do you want to add a note?" << endl;
    cout << "1: YES" << endl;
    cout << "2: NO" << endl;
    cout << "Menu>Sales>Order: ";
    cin >> youWantToAddNote;
    if (youWantToAddNote == '1')
    {
        cout << endl << "Please enter notes: " << endl;
        cout << "Menu>Sales>Order: ";
        cin >> ws;
        getline (cin, notes);
    }
    PizzaOrder newPizzaOrders(costumerName, delivery, address, pizzaPrice, notes,  inTheOven, ready, payed);
    newOrders.push_back(newPizzaOrders);

};
