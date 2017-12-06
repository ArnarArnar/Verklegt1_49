//
//  Salary_service.cpp
//  monthly salary
//
//  Created by Oddný Karen Arnardóttir on 05/12/2017.
//  Copyright © 2017 Oddný Karen Arnardóttir. All rights reserved.
//

#include "Salary_service.hpp"


void SalaryService:: add_salary (const Salary_record& salary_record) {

    sal_repo.add_salary(salary_record);

}
