#include "Superhero.h"

Superhero::Superhero()
{
        nafn = " ";
        aldur = 0;
        ofurkraftur = 'n';
        verbose = true;
        ofurnafn = "weakling";
}

void Superhero::setVerbose(bool v){
        verbose = v;
    }


Superhero::Superhero(string nafn, int aldur, char ofurkraftur){
        this->nafn = nafn;
        this->aldur = aldur;
        this->ofurkraftur = ofurkraftur;
        this->ofurnafn = ofurnafn;
}

istream& operator >> (istream& in, Superhero& hero) {
        if (hero.verbose) {
            cout << "Vinsamlegast skraid inn hetju: " << endl;
            cout << "Nafn: ";
        }
        in >> ws;
        in >> hero.nafn;
        if (hero.verbose) {
            cout << "Aldur: ";
        }
        in >> hero.aldur;
        if (hero.verbose) {
            cout << "Ofurkraftur: ";
        }
        in >> hero.ofurkraftur;
    return in;
    }
ostream& operator << (ostream& out, Superhero& hero){
        if (hero.verbose) {
            out << "Nafn: ";
        }
        out << hero.nafn << endl;
        if (hero.verbose) {
            out << "Aldur: ";
        }
        out << hero.aldur << endl;
        if (hero.verbose) {
            out << "Ofurkraftur: ";
        }
        out << hero.power() << endl;
    return out;
}
char Superhero::getofurkraftur(){
    return ofurkraftur;
}
string Superhero::power(){
    if (getofurkraftur() == 'f'){
        ofurnafn = "Flying";
    }
    if (getofurkraftur() == 'g'){
        ofurnafn = "Giant";
    }
    if (getofurkraftur() == 'h'){
        ofurnafn = "Hacker";
    }
    if (getofurkraftur() == 'n'){
        ofurnafn = "None";
    }
    return ofurnafn;
}
