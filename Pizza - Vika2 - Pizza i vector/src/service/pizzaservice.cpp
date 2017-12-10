#include "pizzaservice.h"

PizzaService::PizzaService()
{
    //ctor
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
void PizzaService::PrintPizzaVector (const vector<Pizza>& pizzaOrder) {
    size_t vectorSize = pizzaOrder.size();
    for(size_t i = 0; i < vectorSize; i++) {
        cout << "Costumer Name: " << pizzaOrder[i].getCostumerName() << endl;
        cout << "Pizza Size:    " << pizzaOrder[i].getPizzaSize() << endl;
//            cout << "Topping:       " << pizzaOrder[i].get
        cout << "Pickup Y/N:    " << pizzaOrder[i].getPickup() << endl;
        cout << "PizzaPrice:    " << pizzaOrder[i].getPizzaPrice() << endl;
    }
}
void PizzaService::ToppingsInOrder (const vector<Topping>& topping) {   //muna opna aftur oddny
    Pizza toppingName;
    for (unsigned int i = 0; i < topping.size(); i++) {
       cout << toppingName.getToppingName();
    }
}


/*
void ToppingService::listAllToppings(){
    ToppingRepository toppRepo;
    vector<Topping> addtopping = toppRepo.FillToppingsVectorFromTXT();
    int toppingSelection = -1;
    while (toppingSelection != 0){
        cout << "Please enter id for toppings to add (0 to quit)" << endl;
        for (size_t i = 0; i < addtopping.size(); i++){
            cout << "[" << i+1 << "] " << addtopping[i].name << endl;
        }
        //cin >> toppingSelection;

  //      if (toppingSelection > 0 && toppingSelection <= (int)topping.size()){
         ///  ----halda áfram, 4:30
        }
    }
*/
