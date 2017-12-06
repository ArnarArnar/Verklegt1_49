//
//  Salary_repository.hpp
//  monthly salary
//
//  Created by Oddný Karen Arnardóttir on 05/12/2017.
//  Copyright © 2017 Oddný Karen Arnardóttir. All rights reserved.
//

#ifndef Salary_repository_hpp
#define Salary_repository_hpp
#include "salary_record.hpp"
#include <stdio.h>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

class SalaryRepository {

    public:
        SalaryRepository();
        void add_salary(const Salary_record& salary_record);
        void get_salary();       ////breyta
    
    private:

};

#endif /* Salary_repository_hpp */
