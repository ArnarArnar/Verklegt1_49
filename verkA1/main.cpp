#include <iostream>
#include <fstream>

using namespace std;

const int MAX = 10;

int main()
{
    string str;
    ifstream fin;
    char answer = 'y';
    fin.open("DataTextFile.txt");
        do {
            if (answer == 'y'){
            for(int i = 0; i < MAX; i++){
                i++;
                getline(fin, str);
                cout << str << endl;
            }
            cout << "Do you wish to continue (y/n)? " << endl;
            cin >> answer;
            }
            else if (answer == 'n'){
                return 0;
            }
            while ( answer != 'y' && answer != 'n'){
            cout << "Do you wish to continue (y/n)? " << endl;
            cin >> answer;
            }
        }
        while(!fin.eof());

    return 0;
}
