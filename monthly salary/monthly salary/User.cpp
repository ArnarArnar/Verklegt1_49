//
//  User.cpp
//  monthly salary
//
//  Created by Oddný Karen Arnardóttir on 04/12/2017.
//  Copyright © 2017 Oddný Karen Arnardóttir. All rights reserved.
//

#include "User.hpp"

Menu::Menu() {
    
}

void Menu::main_menu() {
    
    while (true) {
        
        cout << "Employee's monthly salary" << endl << endl;
        cout << "Pick the number for the corrresponding option" << endl;
        cout << "1. Add a salary record" << endl;
        cout << "2. Get all salary records for a given SSN" << endl;
        cout << "3. Get a total salary for a given year and a given SSN" << endl;
        cout << "4. Get the name of the employee with the highest total salary for a given year" << endl;
        
        char input;
        cin >> input;
        validate_user_input(input);
        
    }
}
void Menu:: validate_user_input(char input) {
    
    if (input == '1') {
        
       salaryservice.add_salary(create_salary_record());
    }
    
    else if (input == '2') {

        cout << "Enter social security number ";
        
    }
    
    else if (input == '3') {
   
        /////////
    }
    
    else if (input == '4') {
    
        ////////
    }
    
    else {
        cout << "invalid input" << endl;
        isdigit(input);
        isalpha(input);
    }

}
Salary_record Menu :: create_salary_record() {

    string name;
    string social_sec_number;
    double salary_given_month;
    int month;
    int year;
    
    cout << "Name ";
    cin >> ws;
    getline(cin, name);
    Invalid_Name_exception Check_if_valid_name;
    while (Check_if_valid_name.isValdName(name)) {
        try {
            while (Check_if_valid_name.isValdName(name)) {
                throw Invalid_Name_exception("That is not a valid name!");
            }
        }
        catch (Invalid_Name_exception e) {
            cout << e.getMessage() << endl;
            cout << "Name ";
            cin >> ws;
            getline (cin, name);
        }
    }
    
    cout << "soicial security number ";
    cin >> social_sec_number;
    Invalid_SSN_exception Check_if_valid_SNN;
    while (Check_if_valid_SNN.isValdSNN(social_sec_number)) {
        try {
            while (Check_if_valid_SNN.isValdSNN(social_sec_number)) {
                throw Invalid_SSN_exception("That is not a valid soicial security number!");
            }
        }
        catch (Invalid_SSN_exception e) {
            cout << e.getMessage() << endl;
            cout << "soicial security number ";
            cin >> social_sec_number;
        }
    }
    
    cout << "salary given month ";
    cin >> salary_given_month;
    Invalid_Salary_exception Check_if_valid_salary;
    while (Check_if_valid_salary.isValdSalary(salary_given_month)) {
        try {
            while (Check_if_valid_salary.isValdSalary(salary_given_month)) {
                throw Invalid_Salary_exception("That is not a valid salary!");
            }
        }
        catch (Invalid_Salary_exception e) {
            cout << e.getMessage() << endl;
            cout << "salary given month ";
            cin >> salary_given_month;
        }
    }
    cout << "month ";
    cin >> month;
    Invalid_Month_exception Check_if_valid;
    while (Check_if_valid.isValdMonth(month)) {
        try {
            while (Check_if_valid.isValdMonth(month)) {
                throw Invalid_Month_exception("That is not a valid month!");
            }
        }
        catch (Invalid_Month_exception e) {
            cout << e.getMessage() << endl;
            cout << "month ";
            cin >> month;
        }
    }
    cout << "year ";
     cin >> year;
    Invalid_Year_exception Check_if_valid_year;
    while (Check_if_valid_year.isValdYear(year)) {
        try {
        while (Check_if_valid_year.isValdYear(year)) {
            throw Invalid_Year_exception("That is not a valid year!");
        }
    }
    catch (Invalid_Year_exception e) {
        cout << e.getMessage() << endl;
        cout << "year ";
        cin >> year;
        
        }
    }
    return Salary_record(name, social_sec_number, salary_given_month, month, year);

}
