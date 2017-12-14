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

        cout << "Price: ";
        cin >> topping.price;
        addtopping.push_back(topping);
    }
    cout << endl;
}



vector<Topping> ToppingService::listAllToppings()
{
    ToppingRepository toppRepo;
    Topping toppingAdd;
    vector<Topping> toppingToSelectFrom = toppRepo.FillToppingsVectorFromTXT();
    int toppingSelection = -1;
    while (toppingSelection != 0)
    {
        cout << "Please enter id for toppings to add (0 to quit)" << endl;
        for (size_t i = 0; i < toppingToSelectFrom.size(); i++)
        {
            cout << "[" << i+1 << "] " << toppingToSelectFrom[i].name << endl;
        }
        cout << "Menu>Sales>Order: ";
        cin >> toppingSelection;
        while(cin.fail())
        {
            cin.clear(); //clear input buffer to restore cin to a usable state
            cin.ignore(INT_MAX, '\n'); //ignore last input
            cout << "you can only enter numbers" << endl;
            cout << "Menu>Sales>Order: ";
            cin >> toppingSelection;
        }
        Topping topping;

        if (toppingSelection > 0 && toppingSelection <= (int)toppingToSelectFrom.size())
        {
            toppingAdd.addTopping(toppingToSelectFrom[toppingSelection-1]);
        }
    }
    return toppingToSelectFrom;
}
//}
