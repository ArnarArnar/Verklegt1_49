#include "pizzaorderservice.h"

PizzaOrderService::PizzaOrderService()
{
    //ctor
}

void PizzaOrderService::PrintToScreenPizzaVector (vector<PizzaOrder>& pizzaOrders) {
    size_t vectorSize = pizzaOrders.size();
    for(size_t i = 0; i < vectorSize; i++) {
        cout << "Costumer Name: " << pizzaOrders[i].getCostumerName() << endl;
        cout << "Topping:       Virkni ekki tilbúin" << endl;

        if (pizzaOrders[i].getDelivery() == '1'){
            cout << "Delivery:      YES" << endl;
                        cout << "Address:       " << pizzaOrders[i].getAddress() << endl;
        }
        else{
            cout << "Delivery:      NO" << endl;
        }
        if (pizzaOrders[i].getNotes() != ""){
            cout << pizzaOrders[i].getNotes() << endl;
        }

        cout << "PizzaPrice:    " << pizzaOrders[i].getPizzaPrice() << endl;
    }

}

void PizzaOrderService::addNewOrderToTXTService(vector<PizzaOrder>& pizzaOrders){
    PizzaOrderRepository pizzaorderRepo;
    pizzaorderRepo.addNewOrderToTXT(pizzaOrders);
}


