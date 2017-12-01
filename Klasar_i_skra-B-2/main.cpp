#include <iostream>
#include "Superhero.h"
#include <fstream>
#include <string>
using namespace std;



int main()
{
    Superhero ofurolvinn;
    ofurolvinn.setVerbose(true);
    cin >> ofurolvinn;
    ofstream fout;
    fout.open("leynilegar_hetju_upplysingar.txt", ios::app);
    ofurolvinn.setVerbose(false);
    fout << ofurolvinn;
    fout.close();

    ifstream fin;
    fin.open("leynilegar_hetju_upplysingar.txt");

    ofurolvinn.setVerbose(false);
    if(fin.is_open()) {
        fin >> ofurolvinn;
    }
    else {
        cout << "Could not open file" << endl;
    }
    fin.close();
    ofurolvinn.setVerbose(true);
    cout << ofurolvinn;

    return 0;
}
