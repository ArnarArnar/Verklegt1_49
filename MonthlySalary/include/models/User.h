#ifndef User_hpp
#define User_hpp
#include <iostream>
#include <stdio.h>
#include "salary_record.h"
#include "Salary_service.h"
#include "Invalid_SSN_Exeption.h"
#include "Invalid_Month_Exeption.h"
#include "Invalid_Year_Exeption.h"
#include "Invalid_Salary_Exeption.h"
#include "Invalid_Name_Exeption.h"

using namespace std;

class Menu {

    public:
        Menu();
        void main_menu();

    private:
        void validate_user_input(char input);
        SalaryService salaryservice;
        Salary_record create_salary_record();

};

#endif /* User_hpp */
