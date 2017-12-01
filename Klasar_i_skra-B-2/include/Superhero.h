#ifndef SUPERHERO_H
#define SUPERHERO_H
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Superhero
{
    public:
        Superhero();
        Superhero(string nafn, int aldur, char ofurkraftur);
        friend istream& operator >> (istream& in, Superhero& hero);
        friend ostream& operator << (ostream& out, Superhero& hero);
        void setVerbose(bool v);
        char getofurkraftur();


    private:
        string nafn;
        int aldur;
        char ofurkraftur;
        bool verbose;
        string ofurnafn;
        string power();
};

#endif // SUPERHERO_H
