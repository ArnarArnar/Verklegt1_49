#include <iostream>
#include <string>
#include <fstream>
#include "Superhero.h"
using namespace std;

int main()
{
    char answer;
    Superhero heros;
    heros.setVerbose(true);
    cin >> heros;
    ofstream fout;
    fout.open("SuperHeroFile.txt", ios::app);
    heros.setVerbose(false);
    fout << heros;
    fout.close();

    ifstream fin;
    fin.open("SuperHeroFile.txt", ios::app);
    fin.close();
    heros.setVerbose(true);
    cout << heros;

    cout << "Do you want a list of heros?";

    cin >> answer;

    if (answer == 'y'){
    string str;
    fin.open("SuperHeroFile.txt");
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
    }

    return 0;
}
