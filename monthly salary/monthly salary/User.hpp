//
//  User.hpp
//  monthly salary
//
//  Created by Oddný Karen Arnardóttir on 04/12/2017.
//  Copyright © 2017 Oddný Karen Arnardóttir. All rights reserved.
//

#ifndef User_hpp
#define User_hpp
#include <iostream>
#include <stdio.h>
#include "salary_record.hpp"
#include "Salary_service.hpp"
#include "Invalid_SSN_Exception.hpp"
#include "Invalid_Month_Exeption.hpp"
#include "Invalid_Year_Exception.hpp"
#include "Invalid_Salary_Exception.hpp"
#include "Invalid_Name_Exception.hpp"

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
