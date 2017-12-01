#include <iostream>
#include <string>
#include <fstream>
using namespace std;



int main()
{
    string str;
    ofstream fout;
    do {
        fout.open("textOutput.txt", ios::app);

        cin >> str;

        fout << str << endl;
        fout.close();

    } while (str != "\\");


    return 0;
}
