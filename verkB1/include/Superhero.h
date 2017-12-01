#ifndef SUPERHERO_H
#define SUPERHERO_H
#include <iostream>
#include <string>
using namespace std;

class Superhero
{
    public:
        Superhero();
        Superhero(string name, int age, char powers);
        friend ostream& operator << (ostream& out, Superhero& superhero);
        friend istream& operator >> (istream& in, Superhero& superhero);
        string get_name();
        int get_age();
        char get_powers();
        void setVerbose(bool v);


    private:
        string name;
        int age;
        char powers;
        string superpowers;
        string power();
        bool verbose;

};

#endif // SUPERHERO_H
