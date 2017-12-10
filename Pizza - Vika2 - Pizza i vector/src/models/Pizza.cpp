#include "Pizza.h"


Pizza::Pizza(){
    /*    string costumerName = "";
        string pizzaSize = "";
        int pickup = 0; /// If 0 = no - if 1 = yes
        double pizzaPrice = 0.0;
    */
}
Pizza::Pizza(string costumerName, string pizzaSize, vector<Topping> toppings, int pickup, double pizzaPrice)
{
        this-> costumerName = costumerName;
        this-> pizzaSize = pizzaSize;
        this-> pickup = pickup;
        this-> pizzaPrice = pizzaPrice;
        this-> toppings = toppings;
}
string Pizza::getCostumerName() const {
        return this->costumerName;
}
string Pizza::getPizzaSize() const{
        return this->pizzaSize;
}
vector<Topping> Pizza::getToppingName() const{
        return this->toppings;
}
int Pizza::getPickup() const{
        return this->pickup;
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
        cout << "costumerName: ";
        string costumerName;
        cin >> costumerName;
        cout << "pizzaSize: ";
        string pizzaSize;
        cin >> pizzaSize;
        ToppingService listToppings;
        toppings = listToppings.listAllToppings();
        cout << "pickup: ";
        int pickup;
        cin >> pickup;
        cout << "pizzaPrice: ";
        double pizzaPrice;
        cin >> pizzaPrice;

        Pizza newPizzaOrder(costumerName, pizzaSize, toppings, pickup, pizzaPrice);
        pizzaOrder.push_back(newPizzaOrder);
//}
/*
ostream& operator << (ostream& out, const vector<Pizza>& pizzaOrder) {
       // if (pizza.verbose) {
            out << "Costumer name: ";
      //  }
        out << pizzaOrder.getCostumerName() << endl;
      //  if (pizza.verbose) {
            out << "Pizza size: ";
      //  }
        out << pizzaOrder.getPizzaSize() << endl;
      //  if (pizza.verbose) {
          //  out << "number of toppings: ";
      //  }
       // out << pizza.numberOfToppings << endl;
      //  if (pizza.verbose) {
            out << "Pickup ";
     //   }
        out << pizzaOrder.getPickup() << endl;
       // cout << endl;
        return out;

*/
};


