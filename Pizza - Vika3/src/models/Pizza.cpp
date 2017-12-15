#include "Pizza.h"


Pizza::Pizza()
{

}
Pizza::Pizza(string costumerName, char pizzaSize, vector<Topping> toppings, char delivery, string address, double pizzaPrice, string notes, char inTheOven, char ready, char payed)
{
    this-> costumerName = costumerName;
    this-> pizzaSize = pizzaSize;
    this-> toppings = toppings;
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
string Pizza::getCostumerName() const
{
    return this->costumerName;
}
char Pizza::getPizzaSize() const
{
    return this->pizzaSize;
}
vector<Topping> Pizza::getToppingName() const
{
    return this->toppings;
}
char Pizza::getDelivery() const
{
    return this->delivery;
}
string Pizza::getAddress() const
{
    return this->address;
}
double Pizza::getPizzaPrice() const
{
    return this->pizzaPrice;
}
string Pizza:: getNotes() const
{
    return this->notes;
}
char Pizza::getInTheOven() const
{
    return this->inTheOven;
}
char Pizza::GetReady() const
{
    return this->ready;
}
char Pizza::GetpPayed() const
{
    return this->payed;
}

istream& operator >> (istream& in, Pizza& pizza)
{
    return in;
}

void Pizza::FillPizzaVector(vector<Pizza>& pizzaOrder)
{
    string costumerName;
    char pizzaSize;
    ToppingService listToppings;
    char delivery;
    string address = "";
    pizzaPrice = 0.0;
    string notes = "";
    char inTheOven = '0';
    char ready = '0';
    char payed = '0';
    char youWantToAddNote = '0';
    cout << endl;
    cout << "Costumer name: ";
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
            cout << "Costumer name: ";
            cin >> ws;
            getline(cin, costumerName);
        }
    }

    cout << endl;
    cout << "How many pizzas? ";
    int howManyPizzas;
    cin >> howManyPizzas;
    for (int i = 0; i < howManyPizzas; i++)
    {
        cout << "pizzaSize: " << endl;
        cout << "1: Small" << endl;
        cout << "2: Medium" << endl;
        cout << "3: Large" << endl;
        cin >> pizzaSize;
        InvalidPizzaSize CheckIfValidPizzaSize;
        while (CheckIfValidPizzaSize.isValdPizzaSize(pizzaSize))
        {
            try
            {
                while (CheckIfValidPizzaSize.isValdPizzaSize(pizzaSize))
                {
                    throw InvalidPizzaSize("That is not a valid pizzaSize");
                }
            }
            catch (InvalidPizzaSize e)
            {
                cout << endl;
                cout << e.getMessage() << endl << endl;;
                cout << "pizzaSize: " << endl;
                cout << "1: Small" << endl;
                cout << "2: Medium" << endl;
                cout << "3: Large" << endl;
                cin >> pizzaSize;
            }
        }

        cout << endl;
        toppings = listToppings.listAllToppings();
        cout << endl;
    }
    cout << "Delivery: " << endl;
    cout << "1: YES" << endl;
    cout << "2: NO" << endl;
    cin >> delivery;
    InvalidDelivery CheckIfValidDelivery;
    while (CheckIfValidDelivery.isValdDelivery(delivery))   //kannski óþafi að hafa þetta?
    {
        try
        {
            while (CheckIfValidDelivery.isValdDelivery(delivery))
            {
                throw InvalidDelivery("That is not a valid delivery");
            }
        }
        catch (InvalidDelivery e)
        {
            cout << endl;
            cout << e.getMessage() << endl << endl;
            cout << "Delivery: " << endl;
            cout << "1: YES" << endl;
            cout << "2: NO" << endl;
            cin >> delivery;
        }
    }

    if (delivery == '1')
    {
        cout << endl << "Please enter a delivery address: " << endl;
        cin >> ws;
        getline(cin, address);
    }

    cout << endl << "do you want to add a note?" << endl;
    cout << "1: YES" << endl;
    cout << "2: NO" << endl;
    cin >> youWantToAddNote;
    if (youWantToAddNote == '1')
    {
        cout << endl << "Please enter notes: " << endl;
        cin >> ws;
        getline (cin, notes);
    }

    for (int i = 0; i < howManyPizzas; i++)
    {
        Pizza newPizzaOrder(costumerName, pizzaSize, toppings, delivery, address, pizzaPrice, notes,  inTheOven, ready, payed);
        pizzaOrder.push_back(newPizzaOrder);
    }

};


