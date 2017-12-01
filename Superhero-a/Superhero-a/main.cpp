//
//  main.cpp
//  Superhero.a
//
//  Created by Oddný Karen Arnardóttir on 29/11/2017.
//  Copyright © 2017 Oddný Karen Arnardóttir. All rights reserved.
//

#include <iostream>
#include "superhero.hpp"

int main() {
    
    Superhero superhero;
    ifstream fin;
    ofstream fout;
    char answer;
    string text;
    fout.open("/Users/OddnyKaren/Desktop/superhero.txt", ios::app);
    fin.open("/Users/OddnyKaren/Desktop/superhero.txt");
    
    if(!fout.eof()){
        
        if(fout.is_open()){
            do{
                cin >> superhero;
                fout << superhero;
                cout << "Would you like to add another superhero?(y/n)";
                cin >> answer;
            }while(answer == 'y');
        }
    }
    if(fin.is_open()){
        while(!fin.eof()){
            getline(fin, text);
            cout << text << endl;
        }
        cout << endl << endl;
        fin.eof();
        
    }
    fout.close();
    fin.close();

    
    return 0;
}
