#ifndef Salary_service_h
#define Salary_service_h

#include <stdio.h>
#include "salary_record.h"
#include "Salary_repository.h"

class SalaryService {

    public:
        void add_salary (const Salary_record& salary_record);

    private:
        SalaryRepository sal_repo;


};

#endif /* Salary_service_hpp */
