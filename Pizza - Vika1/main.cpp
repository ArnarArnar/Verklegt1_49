#include <iostream>
#include <string>
#include <fstream>
//#include "Topping.h"
#include "MainUI.h"
#include "Welcomescreen.h"

using namespace std;
//oddny
class DataClass {

private:
    int i;
    int d;
    char str[16];
    char c;
    bool verbose;

public:
    DataClass() {
        i = 0;
        d = 0.0;
        str[0] = '\0';
        c = ' ';
        verbose = true;
    }
    void setVerbose(bool v) {
        verbose = v;
    }
    void fixStrings(){
        str[15] = '\0';
    }

    friend istream& operator >> (istream& in, DataClass& data) {
        if (data.verbose) {
            cout << "enter integer: ";
        }
        in >> data.i;
        if (data.verbose) {
            cout << "enter double: ";
        }
        in >> data.d;
        if (data.verbose) {
            cout << "enter string: ";
        }
        in >> data.str;

        if (data.verbose) {
            cout << "enter char: ";
        }
        in >> data.c;
        return in;
    }
    friend ostream& operator << (ostream& out, const DataClass& data) {
        if (data.verbose) {
            out << "Integer ";
        }
        out << data.i << endl;
        if (data.verbose) {
            out << "Double ";
        }
        out << data.d << endl;
        if (data.verbose) {
            out << "String ";
        }
        out <<data.str << endl;
        if (data.verbose) {
            out << "Character ";
        }
        out << data.c << endl;
        return out;
    }
};

int main()
{

    Welcomescreen welcomescreen;

    welcomescreen.welcomeUI();

    return 0;

    DataClass data1;

    cin >> data1;
    ofstream fout;
    fout.open("binary_file_DataClass.dat", ios::binary | ios::app);
    data1.fixStrings();
    fout.write((char*) (&data1), sizeof(DataClass));

    fout.close();

    DataClass data2;

    ifstream fin;
    fin.open("binary_file_DataClass.dat", ios::binary);

    if(fin.is_open()) {

        fin.seekg(0, fin.end); ///seekg virkar a gagnastraum. Seekp output straum. (0 er offsettid og fin.end) til ad finna endirinn
        int recordCount = fin.tellg() / sizeof(DataClass);
        fin.seekg(0, fin.beg); /// til ad byrja aftur a byrjun

        for (int i = 0; i < recordCount; i++) {
            fin.read ((char*) (&data2), sizeof(DataClass));
            data2.fixStrings();
            cout << data2 << endl;
        }
    }
    else {

        cout << "Could not open file" << endl;
    }
    fin.close();



    return 0;
}
