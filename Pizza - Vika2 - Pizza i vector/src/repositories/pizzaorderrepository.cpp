#include "pizzaorderrepository.h"

PizzaOrderRepository::PizzaOrderRepository()
{
    //ctor
}

void PizzaOrderRepository::addNewOrderToTXT(vector<PizzaOrder>& pizzaOrder){

    ofstream fout;
    fout.open ("pizzaorders.txt", ios::app);
    int toppingCount = pizzaOrder.size();

    for(int i = 0; i < toppingCount; i++){
        fout << pizzaOrder[i].getCostumerName() << ",";
        fout << pizzaOrder[i].getDelivery() << ",";
        fout << pizzaOrder[i].getAddress() << ",";
        fout << pizzaOrder[i].getNotes() << ",";
        fout << pizzaOrder[i].getPizzaPrice() << ",";

        fout << endl;
    }
    fout.close();
}


