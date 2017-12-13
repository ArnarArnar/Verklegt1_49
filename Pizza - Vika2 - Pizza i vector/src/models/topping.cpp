#include "topping.h"

Topping::Topping()
{
    //ctor
}

Topping::Topping(string name, double price)
{
    this->price = price;
    this->name = name;
}

string Topping::get_name() const
{
    return this->name;
}

double Topping::get_price()const
{
    return this->price;
}

ostream& operator << (ostream& out, vector<Topping>& toppingFromVector)
{
    for (unsigned int i = 0; i < toppingFromVector.size(); i++)
    {
        out << "Name of topping  : " << toppingFromVector[i].get_name() << endl;
        out << "Price of topping : " << toppingFromVector[i].get_price() << endl;
    }
    return out;
}



istream& operator >> (istream& in, vector<Topping>& toppingFromVector)
{
    int numberOfToppings;
    cout << "Number of toppings: ";
    in >> numberOfToppings;
    while(cin.fail())
    {
        cin.clear(); //clear input buffer to restore cin to a usable state
        cin.ignore(INT_MAX, '\n'); //ignore last input
        cout << "you can only enter numbers" << endl;
        cout << "Number of toppings? ";
        in >> numberOfToppings;
    }

    Topping topping;

    for(int i = 0; i < numberOfToppings; i++)
    {
        cout << "Topping: ";
        in >> ws;
        getline(in, topping.name);

        InvalidName CheckIfValidName;
        while (CheckIfValidName.isValdName(topping.name))
        {
            try
            {
                while (CheckIfValidName.isValdName(topping.name))
                {
                    throw InvalidName("That is not a valid topping");
                }
            }
            catch (InvalidName e)
            {
                cout << endl;
                cout << e.getMessage() << endl << endl;
                cout << "Topping: " << endl;
                cin >> ws;
                getline(cin, topping.name);
            }
        }
        toppingFromVector.push_back(topping);
        cout << "Price: ";
        /// hér vantar að kasta villu ef ekki int.
        cin >> topping.price;

       /* while(cin.fail())                     ///virkar ekki skoða betur, því þetta er inní forlúppu
        {
            cin.clear(); //clear input buffer to restore cin to a usable state
            cin.ignore(INT_MAX, '\n'); //ignore last input
            cout << "you can only enter numbers" << endl;
            cout << "Number of toppings? ";
            in >> numberOfToppings;
        }
*/
        toppingFromVector.push_back(topping);
    }

    return in;
}


