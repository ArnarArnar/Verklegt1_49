#ifndef salary_record_hpp
#define salary_record_hpp
#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

class Salary_record {

    private:
        string name;
        string social_sec_number;  ////hafa frekar char????
        double salary_given_month;
        int month;
        int year;

    public:
        Salary_record();
        Salary_record(string name, string social_sec_number, double salary_given_month, int month, int year);

        string get_name();
        string get_social_sec_number();
        double get_salary_given_month();
        int get_month();
        int get_year();
    friend ostream& operator << (ostream& out, const Salary_record& salary_record);
    friend istream& operator << (istream& in, Salary_record& salary_record);

};

#endif /* salary_record_hpp */
