#include "PizzaRepository.h"

PizzaRepository::PizzaRepository()
{
    //ctor
}

void PizzaRepository::setVerbose(bool v)
{
    verbose = v;
}

void PizzaRepository::addNewOrderToTXT(vector<Pizza>& pizzaOrder)
{
    ofstream fout;
    fout.open ("pizzaorders.txt", ios::app);
    int toppingCount = pizzaOrder.size();

    for(int i = 0; i < toppingCount; i++)
    {
        fout << pizzaOrder[i].getCostumerName() << ",";
        fout << pizzaOrder[i].getPizzaSize() << ",";
        fout << pizzaOrder[i].getDelivery() << ",";
        fout << pizzaOrder[i].getAddress() << ",";
        fout << pizzaOrder[i].getNotes() << ",";
        fout << pizzaOrder[i].getPizzaPrice() << ",";

        fout << endl;
    }
    fout.close();
}

void PizzaRepository::viewOrdersInTXT()
{
    string str;
    ifstream fin;
    fin.open("pizzaorders.txt");
    if(fin.is_open())
    {
        while(!fin.eof())
        {
            getline(fin, str);
            cout << str << endl;
        }
        cout << fin.eof() << endl;
    }
    else
    {
        cout << "File not open" << endl;
    }
    fin.close();
}

void PizzaRepository::set_size_price(){
    char answer;
    do {
    PizzaRepository pizzas;
    pizzas.setVerbose(true);
    ifstream fin;
    string str;
    fin.open("pizzas.txt");
    if(fin.is_open()){
        while(!fin.eof()){
            getline(fin, str);
            cout << str << endl;
        }
        cout << fin.eof() << endl;
    }
    else {
        cout << "File not open" << endl;
    }
    fin.close();

    cin >> pizzas;
    ofstream fout;
    fout.open("pizzas.txt", ios::app);
    pizzas.setVerbose(false);
    fout << pizzas;
    fout.close();

    fin.open("pizzas.txt", ios::app);
    fin.close();
    pizzas.setVerbose(true);
    cout << pizzas;

    cout << "Do you want to add another pizza?(y/n)";

    cin >> answer;
    }
    while (answer == 'y');
}
istream& operator >> (istream& in, PizzaRepository& pizzaRepository)
{
    if (pizzaRepository.verbose)
    {
        cout << "Pleas enter pizza size: ";
    }
    in >> pizzaRepository.name;

    if (pizzaRepository.verbose)
    {
        cout << "Pleas enter pizza price: ";
    }
    in >> pizzaRepository.price;
    return in;
}

ostream& operator << (ostream& out, const PizzaRepository& pizzaRepository)
{

    if (pizzaRepository.verbose)
    {
        out << "Pizza: ";
    }
    out << pizzaRepository.name << ",";
    if (pizzaRepository.verbose)
    {
        out << "Price: ";
    }
    out << pizzaRepository.price << "," << endl;
    cout << endl;

    return out;
}
void PizzaRepository::listOfPizzas()
{
    string str;
    ifstream fin;
    fin.open("pizzas.txt");
    if(fin.is_open())
    {
        while(!fin.eof())
        {
            getline(fin, str);
            cout << str << endl;
        }
        cout << fin.eof() << endl;
    }
}

