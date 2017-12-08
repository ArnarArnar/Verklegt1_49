#ifndef Salary_service_h
#define Salary_service_h

#include <stdio.h>
#include "salary_record.h"
#include "Salary_repository.h"

class SalaryService {

    public:
        void add_salary (const Salary_record& salary_record);
        void get_salary_for_an_SSN_service (string SSN_to_look_for);
        void get_salary_for_a_given_year_service (int year_to_look_for);
        void get_total_salary_for_a_given_SSN_service(string SSN_to_look_for);
        void get_name_of_highest_salary_service();
    private:
//    SalaryRepository sal_repo;


};

#endif /* Salary_service_hpp */
