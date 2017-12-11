#include "Pizza.h"


Pizza::Pizza()
{
    /*    string costumerName = "";
        string pizzaSize = "";
        int delivery = 0; /// If 2 = no - if 1 = yes
        double pizzaPrice = 0.0;
    */
}
Pizza::Pizza(string costumerName, char pizzaSize, vector<Topping> toppings, char delivery, string address, double pizzaPrice, char notes, string writeNotes)
{
    this-> costumerName = costumerName;
    this-> pizzaSize = pizzaSize;
    this-> toppings = toppings;
    this-> delivery = delivery;
    this-> address = address;
    this-> pizzaPrice = pizzaPrice;
    this -> notes = notes;
    this -> writeNotes = writeNotes;
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
char Pizza:: getNotes() const
{
    return this -> notes;
}
string Pizza::getWriteNotes() const
{
    return this ->writeNotes;
}

istream& operator >> (istream& in, Pizza& pizza)
{



    return in;
}
/*
void Pizza::PrintPizzaVector (const vector<Pizza>& pizzaOrder){
        size_t vectorSize = pizzaOrder.size();

        for(size_t i = 0; i < vectorSize; i++){
            cout << pizzaOrder << endl;
                }
}
*/
void Pizza::FillPizzaVector(vector<Pizza>& pizzaOrder)
{
    string costumerName;
    char pizzaSize;
    ToppingService listToppings;
    char delivery;
    string address = "";
    pizzaPrice = 0.0;
    char notes;
    string writeNotes;
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
    cout << "pizzaSize: " << endl;
    cout << "1: Small" << endl;
    cout << "2: Medium" << endl;
    cout << "3: Large" << endl;
    cout << "Menu>Sales>Order: ";
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
        catch (InvalidPizzaSize e)             //spurning um að setja þetta í service?
        {
            //eða ef villuboð koma að byrja upp á nýtt?
            cout << endl;
            cout << e.getMessage() << endl << endl;;
            cout << "pizzaSize: " << endl;
            cout << "1: Small" << endl;
            cout << "2: Medium" << endl;
            cout << "3: Large" << endl;
            cout << "Menu>Sales>Order: ";
            cin >> pizzaSize;
        }
    }

    cout << endl;
    toppings = listToppings.listAllToppings();
    cout << endl;
    cout << "Delivery: " << endl;
    cout << "1: YES" << endl;
    cout << "2: NO" << endl;
    cout << "Menu>Sales>Order: ";
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
            cout << "Menu>Sales>Order: ";
            cin >> delivery;
        }
    }

    if (delivery == '1')
    {
        cout << endl << "Please enter a delivery address: " << endl;
        cout << "Menu>Sales>Order: ";
        cin >> ws;
        getline(cin, address);
    }

    cout << endl;
    cout << "Notes: " << endl;
    cout << "1: YES" << endl;
    cout << "2: NO" << endl;
    cout << "Menu>Sales>Order: ";
    cin >> notes;

    if (notes == '1')
    {
        cout << endl << "Please enter notes: " << endl;
        cout << "Menu>Sales>Order: ";
        cin >> ws;
        getline (cin, writeNotes);
    }

    Pizza newPizzaOrder(costumerName, pizzaSize, toppings, delivery, address, pizzaPrice, notes, writeNotes);
    pizzaOrder.push_back(newPizzaOrder);





//}
    /*
    ostream& operator << (ostream& out, const Pizza& toppings) {
        out << "toppings: " << endl;
        for (unsigned int i = 0; i < toppings.getToppingName().size(); i++) {
            out << toppings.getToppingName();
        }

            return out;
    */

};


