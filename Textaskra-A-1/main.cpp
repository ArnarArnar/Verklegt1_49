#include <iostream>
#include <string>
#include <fstream>
using namespace std;
const int MAX = 10;


void inputstr(string str) {
    ofstream fout;
    fout.open("textOutput.txt", ios::app);
    cin >> str;
    fout << str << endl;
    fout.close();
}

void printInput(string str) {
    ifstream fin;
    fin.open("textOutput.txt");
    if (fin.is_open()) {
        while(!fin.eof()) {
            getline(fin, str);
            cout << str << endl;
        }
    }
    else {
        cout << "File not open" << endl;
    }
    fin.close();
}
bool checkInput(char input){
    if (input == 'y' || input == 'n'){
        return true;
    }
    cout << "Invalid input, please try again" << endl;
    return false;
}
char ifcont (){
    cout << "Do you wish to continue (y/n)?";
    char in;
    cin >> in;
    return in;
}

int main()
{
    string str;
    char input = 'y';
    do {
        do{
        input = ifcont();
        }while(checkInput(input) != true);
        if (input == 'y') {
            for (int i = 0; i < MAX; i++){
                inputstr(str);
            }
            printInput(str);

        }
    } while (input!= 'n');
    return 0;
}
