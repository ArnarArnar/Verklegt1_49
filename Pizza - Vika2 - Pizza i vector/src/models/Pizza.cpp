#include "Pizza.h"


Pizza::Pizza(){
    /*    string costumerName = "";
        string pizzaSize = "";
        int delivery = 0; /// If 2 = no - if 1 = yes
        double pizzaPrice = 0.0;
    */
}
Pizza::Pizza(string costumerName, char pizzaSize, vector<Topping> toppings, char delivery, string address, double pizzaPrice)
{
        this-> costumerName = costumerName;
        this-> pizzaSize = pizzaSize;
        this-> toppings = toppings;
        this-> delivery = delivery;
        this-> address = address;
        this-> pizzaPrice = pizzaPrice;
}
string Pizza::getCostumerName() const {
        return this->costumerName;
}
char Pizza::getPizzaSize() const{
        return this->pizzaSize;
}
vector<Topping> Pizza::getToppingName() const{
        return this->toppings;
}
char Pizza::getDelivery() const{
        return this->delivery;
}
string Pizza::getAddress() const{
        return this->address;
}
double Pizza::getPizzaPrice() const {
        return this->pizzaPrice;
}
istream& operator >> (istream& in, Pizza& pizza){



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
void Pizza::FillPizzaVector(vector<Pizza>& pizzaOrder){
        string costumerName;
        char pizzaSize;
        ToppingService listToppings;
        char delivery;
        string address = "";
        pizzaPrice = 0.0;
        //char confirm = '0';
        cout << endl;
        cout << "Costumer name: " << endl;
        cout << "Menu>Sales>Order: ";
        cin >> ws;
        getline(cin, costumerName);
        cout << endl;
        cout << "pizzaSize: " << endl;
        cout << "1: Small" << endl;
        cout << "2: Medium" << endl;
        cout << "3: Large" << endl;
        cout << "Menu>Sales>Order: ";
        cin >> pizzaSize;
        cout << endl;
        toppings = listToppings.listAllToppings();
        cout << endl;
        cout << "Delivery: " << endl;
        cout << "1: YES" << endl;
        cout << "2: NO" << endl;
        cout << "Menu>Sales>Order: ";
        cin >> delivery;
        if (delivery == '1'){
            cout << endl << "Please enter a delivery address: " << endl;
            cout << "Menu>Sales>Order: ";
            cin >> ws;
            getline(cin, address);
        }
        Pizza newPizzaOrder(costumerName, pizzaSize, toppings, delivery, address, pizzaPrice);
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

