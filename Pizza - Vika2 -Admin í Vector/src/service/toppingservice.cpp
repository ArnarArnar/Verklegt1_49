#include "toppingservice.h"

ToppingService::ToppingService()
{
    //ctor
}
vector<Topping> ToppingService::FillToppingsVectorFromTXTService(vector<Topping>& retrieveToppings){
    ToppingRepository retrive;
    return retrive.FillToppingsVectorFromTXT(retrieveToppings);

}
void ToppingService::printToppingsToScreenFromVector(vector<Topping>& toppingFromVector){
    for (unsigned int i = 0; i < toppingFromVector.size(); i++){
        cout << "Name of topping  :  " << toppingFromVector[i].get_name() << endl;
        cout << "Price of topping : " << toppingFromVector[i].get_price() << endl;
    }
}

void ToppingService::printToppingsToTXT(vector<Topping>& toppingFromVector){
        ToppingRepository printToTXT;
        printToTXT.PrintToppingsVector(toppingFromVector);
}

void ToppingService::addToppingsVector(vector<Topping>& addtopping){
    cout << "how many toppins?";
    int numberOfToppings;
    cin >> numberOfToppings;
    Topping topping;

    for(int i = 0; i < numberOfToppings; i++){
        cout << "Topping: ";
//        cin >> addtopping;

        ToppingRepository printToFile;
//        printToFile.PrintToppingsVector(printVector);
//        printVector.push_back(topping);
        cout << endl;
    }
    cout << endl;
}
