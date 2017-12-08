#include "Salary_service.h"


void SalaryService:: add_salary (const Salary_record& salary_record) {
    SalaryRepository sal_repository;
    sal_repository.add_salary(salary_record);

}
