//.
//  superhero.hpp
//  Superhero.a
//
//  Created by Oddný Karen Arnardóttir on 29/11/2017.
//  Copyright © 2017 Oddný Karen Arnardóttir. All rights reserved.
//

#ifndef superhero_hpp
#define superhero_hpp
#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class Superhero {
    
private:
    string _nafn;
    int _aldur;
    char _ofurkraftur;
    
    bool verbose;
    
public:
    Superhero();
    Superhero(string nafn, int aldur, char ofurkraftur);
    void set_verbose(bool v);
    friend istream& operator >> (istream& in, Superhero& superhero);
    friend ostream& operator << (ostream& out, const Superhero& superhero);
};
#endif /* superhero_hpp */
