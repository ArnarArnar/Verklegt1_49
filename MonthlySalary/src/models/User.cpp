#include "User.h"

Menu::Menu()
{

}

void Menu::main_menu()
{

    char option;

    do
    {
        cout << endl;
        cout << "********************************************" << endl;
        cout << "Pick the number for the corresponding option" << endl;
        cout << "********************************************" << endl;
        cout << "1. Add a salary record" << endl;
        cout << "2. Get all salary records for a given SSN" << endl;
        cout << "3. Get a total salary for a given year" << endl;
        cout << "4. Get a total salary for a given SSN" << endl;
        cout << "5. Get the name of the employee with the highest total salary for a given year" << endl;

        char input;
        cin >> input;
        validate_user_input(input);

        cout << endl << "Do you want to continue (y/n)? " << endl;

        cin >> option;
    }
    while (option == 'y');

}
void Menu:: validate_user_input(char input)
{

    if (input == '1')
    {

        salaryservice.add_salary(create_salary_record());
    }

    else if (input == '2')
    {

        cout << "Enter social security number ";
        string SSN_to_look_for;
        cin >> SSN_to_look_for;
        Invalid_SSN_exception Check_if_valid_SNN;
        while (!Check_if_valid_SNN.isValdSSN(SSN_to_look_for))
        {
            try
            {
                while (!Check_if_valid_SNN.isValdSSN(SSN_to_look_for))
                {
                    throw Invalid_SSN_exception("That is not a valid social security number");
                }
            }
            catch (Invalid_SSN_exception e)
            {
                cout << e.getMessage() << endl;
                cout << "social security number ";
                cin >> SSN_to_look_for;
            }
        }

        SalaryService lookForSalary;
        lookForSalary.get_salary_for_an_SSN_service(SSN_to_look_for);

    }

    else if (input == '3')
    {
        cout << "Please enter a year: " << endl;
        int year_to_check;
        cin >> year_to_check;
       Invalid_Year_exception Check_if_valid_year;
    while (Check_if_valid_year.isValdYear(year_to_check))
    {
        try
        {
            while (Check_if_valid_year.isValdYear(year_to_check))
            {
                throw Invalid_Year_exception("That is not a valid year!");
            }
        }
        catch (Invalid_Year_exception e)
        {
            cout << e.getMessage() << endl;
            cout << "Please enter a year: ";
            cin >> year_to_check;
        }
    }
        salaryservice.get_salary_for_a_given_year_service(year_to_check);
    }

    else if (input == '4')
    {
        cout << "Please enter a SSN: ";
        string SSN_to_look_for;
        cin >> SSN_to_look_for;
        salaryservice.get_total_salary_for_a_given_SSN_service(SSN_to_look_for);

    }

    else if (input == '5')
    {


    }
    else
    {
        cout << "Invalid input" << endl;
        isdigit(input);
        isalpha(input);
    }

}
Salary_record Menu :: create_salary_record()
{

    string name;
    string social_sec_number;
    double salary_given_month;
    int month;
    int year;

    cout << "Name ";
    cin >> ws;
    getline(cin,name);
    Invalid_Name_exception Check_if_valid_name;
    while(Check_if_valid_name.isValdName(name))
    {
        try
        {
            while (Check_if_valid_name.isValdName(name))
            {
                throw Invalid_Name_exception("That is not a valid name!");
            }
        }
        catch (Invalid_Name_exception e)
        {
            cout << e.getMessage() << endl;
            cout << "Name ";
            cin >> ws;
            getline(cin, name);
        }
    }
    cout << "Social security number ";
    cin >> social_sec_number;
    Invalid_SSN_exception Check_if_valid_SNN;

    while (!Check_if_valid_SNN.isValdSSN(social_sec_number))
    {
        try
        {
            while (!Check_if_valid_SNN.isValdSSN(social_sec_number))
            {
                throw Invalid_SSN_exception("That is not a valid social security number");
            }
        }
        catch (Invalid_SSN_exception e)
        {
            cout << e.getMessage() << endl;
            cout << "social security number ";
            cin >> social_sec_number;
        }
    }

    cout << "Salary given month ";
    cin >> salary_given_month;
    Invalid_Salary_exception Check_if_valid_salary;
    while (Check_if_valid_salary.isValdSalary(salary_given_month))
    {
        try
        {
            while (Check_if_valid_salary.isValdSalary(salary_given_month))
            {
                throw Invalid_Salary_exception("That is not a valid salary");
            }
        }
        catch (Invalid_Salary_exception e)
        {
            cout << e.getMessage() << endl;
            cout << "salary given month ";
            cin >> salary_given_month;
        }
    }

    cout << "Month ";
    cin >> month;
    Invalid_Month_exception Check_if_valid;
    while (Check_if_valid.isValdMonth(month))
    {
        try
        {
            while (Check_if_valid.isValdMonth(month))
            {
                throw Invalid_Month_exception("That is not a valid month!");
            }
        }
        catch (Invalid_Month_exception e)
        {
            cout << e.getMessage() << endl;
            cout << "Month ";
            cin >> month;
        }
    }
    cout << "Year ";
    cin >> year;
    Invalid_Year_exception Check_if_valid_year;
    while (Check_if_valid_year.isValdYear(year))
    {
        try
        {
            while (Check_if_valid_year.isValdYear(year))
            {
                throw Invalid_Year_exception("That is not a valid year!");
            }
        }
        catch (Invalid_Year_exception e)
        {
            cout << e.getMessage() << endl;
            cout << "Year ";
            cin >> year;
        }
    }
    return Salary_record(name, social_sec_number, salary_given_month,month, year);

}
