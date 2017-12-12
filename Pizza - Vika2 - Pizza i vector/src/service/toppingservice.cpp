#include "toppingservice.h"

ToppingService::ToppingService()
{
    //ctor
}
vector<Topping> ToppingService::FillToppingsVectorFromTXTService()
{
    ToppingRepository retrive;
    return retrive.FillToppingsVectorFromTXT();

}
void ToppingService::printToppingsToScreenFromVector(vector<Topping>& toppingFromVector)
{
    for (unsigned int i = 0; i < toppingFromVector.size(); i++)
    {
        cout << "Name of topping  : " << toppingFromVector[i].get_name() << endl;
        cout << "Price of topping : " << toppingFromVector[i].get_price() << endl;
    }
    cout << endl;
}

void ToppingService::addToppingsVector(vector<Topping>& addtopping)
{
    ToppingRepository toppRepo;
    addtopping = toppRepo.FillToppingsVectorFromTXT();
    cout << "how many toppins? ";
    int numberOfToppings;
    cin >> numberOfToppings;

    while(cin.fail())
    {
        cin.clear(); //clear input buffer to restore cin to a usable state
        cin.ignore(INT_MAX, '\n'); //ignore last input
        cout << "you can only enter numbers" << endl;
        cout << "how many toppings? ";
        cin >> numberOfToppings;
    }
    Topping topping;

    for(int i = 0; i < numberOfToppings; i++)
    {
        cout << "Topping: ";
        cin >> topping.name;
        addtopping.push_back(topping);
        cout << "Price: ";
        cin >> topping.price;
        addtopping.push_back(topping);
    }
    cout << endl;
}


