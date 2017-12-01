#include "Superhero.h"

Superhero::Superhero(){
    name = "";
    age = 0;
    powers = 'n';
    superpowers = "weakling";
}

Superhero::Superhero(string name, int age, char powers){
    this->name = name;
    this->age = age;
    this->powers = powers;
    this->superpowers = superpowers;
}
void Superhero::setVerbose(bool v){
        verbose = v;
    }

string Superhero::get_name(){
    return this->name;
}

int Superhero::get_age(){
    return this->age;
}

char Superhero::get_powers(){
    return powers;
}

ostream& operator << (ostream& out, Superhero& superhero){
        if (superhero.verbose) {
        }
        out << superhero.name << " ";
        if (superhero.verbose) {
            out << " (";
        }
        out << superhero.age << " ";
        if (superhero.verbose) {
            out << "): ";
        }
        out << superhero.power()  << " " << endl;
    return out;
}

istream& operator >> (istream& in, Superhero& superhero){

    if (superhero.verbose){
    cout << "Pleas enter name: ";
    }
    in >> superhero.name;
    if (superhero.verbose) {
    cout << "Pleas enter age: ";
    }
    in >> superhero.age;
    if (superhero.verbose) {
    cout << "Pleas enter superpower: ";
    }
    in >> superhero.powers;

    return in;
    }

string Superhero::power(){
    if (get_powers() == 'f'){
        superpowers = "Flying";
    }
    if (get_powers() == 'g'){
        superpowers = "Giant";
    }
    if (get_powers() == 'h'){
        superpowers = "Hacker";
    }
    if (get_powers() == 'n'){
        superpowers = "None";
    }
    return superpowers;
}

