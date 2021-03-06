#include "toppingservice.h"

ToppingService::ToppingService()
{
    //ctor
}
vector<Topping> ToppingService::FillToppingsVectorFromTXTService(){
    ToppingRepository retrive;
    return retrive.FillToppingsVectorFromTXT();

}
void ToppingService::printToppingsToScreenFromVector(vector<Topping>& toppingFromVector){
    for (unsigned int i = 0; i < toppingFromVector.size(); i++){
        cout << "Name of topping  : " << toppingFromVector[i].get_name() << endl;
        cout << "Price of topping : " << toppingFromVector[i].get_price() << endl;
    }
    cout << endl;
}

void ToppingService::addToppingsVector(vector<Topping>& addtopping){
    ToppingRepository toppRepo;
    addtopping = toppRepo.FillToppingsVectorFromTXT();
    cout << "how many toppins? ";
    int numberOfToppings;
    cin >> numberOfToppings;
    Topping topping;

    for(int i = 0; i < numberOfToppings; i++){
        cout << "Topping: ";
        cin >> topping.name;
        addtopping.push_back(topping);
        cout << "Price: ";
        cin >> topping.price;
        addtopping.push_back(topping);
    }
    cout << endl;
}



vector<Topping> ToppingService::listAllToppings(){
    ToppingRepository toppRepo;
    Topping toppingAdd;
    vector<Topping> toppingToSelectFrom = toppRepo.FillToppingsVectorFromTXT();
    int toppingSelection = -1;
    while (toppingSelection != 0){
        cout << "Please enter id for toppings to add (0 to quit)" << endl;
        for (size_t i = 0; i < toppingToSelectFrom.size(); i++){
            cout << "[" << i+1 << "] " << toppingToSelectFrom[i].name << endl;
        }
        cin >> toppingSelection;

        if (toppingSelection > 0 && toppingSelection <= (int)toppingToSelectFrom.size()){
            toppingAdd.addTopping(toppingToSelectFrom[toppingSelection-1]);
        }
    }
    return toppingToSelectFrom;
}
//}
