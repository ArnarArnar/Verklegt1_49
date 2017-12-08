#ifndef Salary_repository_h
#define Salary_repository_h
#include "salary_record.h"
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
