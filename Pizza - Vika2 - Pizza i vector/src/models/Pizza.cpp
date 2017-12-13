#include "Pizza.h"

Pizza::Pizza() {

    pizzaSize = '0';


}
Pizza::Pizza(char pizzaSize, vector<Topping>& toppings)
{
    this-> pizzaSize = pizzaSize;
    this-> toppings = toppings;
}

char Pizza::getPizzaSize() const
{
    return this->pizzaSize;
}
vector<Topping> Pizza::getToppingName() const
{
    return this->toppings;
}
void Pizza::setPizzaSize(char Pizza)
{
    this->pizzaSize = pizzaSize;
}
void Pizza::setToppingName(vector<Topping>)
{
    this->toppings = toppings;
}

ostream& operator << (ostream& out, Pizza& pizza) {
    out << "Pizza size (1 small, 2, medim, 3 large: " <<  pizza.getPizzaSize() << endl;
    out << "toppings: " << endl;
    for (unsigned int j = 0; j < pizza.toppings.size(); j++) {
        out <<  pizza.toppings[j].get_name();
    }
     return out;
}

istream& operator >> (istream& in, Pizza& pizza){
   /* cout << "pizzaSize: " << endl;
    cout << "1: Small" << endl;
    cout << "2: Medium" << endl;
    cout << "3: Large" << endl;
    cout << "Menu>Sales>Order: ";
    */
    in >> pizza.pizzaSize;

    return in;
}
/*
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
*/



