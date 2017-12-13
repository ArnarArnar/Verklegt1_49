#include "Pizza.h"


Pizza::Pizza() {}
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
void Pizza::FillPizzaVector(vector<Pizza>& pizzas){
//    PizzaService.FillPizzaVector(pizzas);
}


    /*
    ostream& operator << (ostream& out, const Pizza& toppings) {
        out << "toppings: " << endl;
        for (unsigned int i = 0; i < toppings.getToppingName().size(); i++) {
            out << toppings.getToppingName();
        }

            return out;
    */

    /*    cout << "pizzaSize: " << endl;
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
*/



