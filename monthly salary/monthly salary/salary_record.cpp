//
//  salary_record.cpp
//  monthly salary
//
//  Created by Oddný Karen Arnardóttir on 04/12/2017.
//  Copyright © 2017 Oddný Karen Arnardóttir. All rights reserved.
//

#include "salary_record.hpp"


Salary_record:: Salary_record() {

    this -> name = "";
    this -> social_sec_number = "";
    this -> salary_given_month = 0;
    this -> month = 0;
    this -> year = 0;


}


Salary_record::Salary_record (string name, string social_sec_number, double salary_given_month, int month, int year) {
    
    this -> name = name;
    this -> social_sec_number = social_sec_number;
    this -> salary_given_month = salary_given_month;
    this -> month = month;
    this -> year = year;

}
string Salary_record:: get_name() {

    return this -> name;

}
string Salary_record::get_social_sec_number() {

    return this -> social_sec_number;
}

double Salary_record::get_salary_given_month() {

    return this-> salary_given_month;
}
int Salary_record::get_month() {

    return this -> month;
}
int Salary_record::get_year() {

    return this -> year;

}
ostream& operator << (ostream& out, const Salary_record& salary_record) {
    
    out << salary_record.name << ", ";
    out << salary_record.social_sec_number << ", ";
    out << salary_record.salary_given_month << ", ";
    out << salary_record.month << ", ";
    out << salary_record.year << endl;

    return out;
}
istream& operator << (istream& in, Salary_record& salary_record) {
    
    in >> salary_record.name;
    in >> salary_record.social_sec_number;
    in >> salary_record.salary_given_month;
    in >> salary_record.month;
    in >> salary_record.year;
    
    return in;
}





