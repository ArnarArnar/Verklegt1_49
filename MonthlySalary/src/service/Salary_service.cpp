#include "Salary_service.h"


void SalaryService:: add_salary (const Salary_record& salary_record) {
    SalaryRepository sal_repository;
    sal_repository.add_salary(salary_record);

}
void SalaryService:: get_salary_for_an_SSN_service (string SSN_to_look_for){
    SalaryRepository lookForSSN;
    lookForSSN.get_salary_for_an_SSN(SSN_to_look_for);
}
void SalaryService::get_salary_for_a_given_year_service (int year_to_look_for){
    SalaryRepository lookForYear;
    lookForYear.get_salary_for_a_given_year(year_to_look_for);
}
void get_total_salary_for_a_given_SSN_service(string SSN_to_look_for){
    SalaryRepository totalSSN;
    totalSSN.get_total_salary_for_a_given_SSN(SSN_to_look_for);
}
