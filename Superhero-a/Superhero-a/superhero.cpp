//
//  superhero.cpp
//  Superhero.a
//
//  Created by Oddný Karen Arnardóttir on 29/11/2017.
//  Copyright © 2017 Oddný Karen Arnardóttir. All rights reserved.
//

#include "superhero.hpp"


Superhero::Superhero() {
    _nafn = "";
    _aldur = 0;
    _ofurkraftur = 'n';
    verbose = true;
}
Superhero::Superhero(string nafn, int aldur, char ofurkraftur) {
    _nafn = nafn;
    _aldur = aldur;
    _ofurkraftur = ofurkraftur;
}
void Superhero::set_verbose(bool v) {

    verbose = v;
}
istream& operator >> (istream& in, Superhero& superhero) {
    
    if (superhero.verbose) {
        cout << "Please enter name: ";
    }
    in >> superhero._nafn;
    
    if (superhero.verbose) {
        cout << "Please enter age: ";
    }
    in >> superhero._aldur;
    
    if (superhero.verbose){
        cout << "Please enter superpower: ";
    }
    in >> superhero._ofurkraftur;
    
    return in;
}
ostream& operator << (ostream& out, const Superhero& superhero) {
    
    out << superhero._nafn << " ";
    
    if (superhero.verbose){
        out << "(";
    }
    out << superhero._aldur;
    
    if (superhero.verbose) {
        out << "): ";
    }
    if(superhero._ofurkraftur == 'f') {
        out << "Flying" << endl;
    }
    else if(superhero._ofurkraftur == 'g') {
        out << "Giant" << endl;
    }
    else if (superhero._ofurkraftur == 'h') {
        out << "Hacker" << endl;
    }
    else if (superhero._ofurkraftur == 'n') {
        out << "None" << endl;
    }
    else {
        out << "Weakling" << endl;
    }
    return out;
}
