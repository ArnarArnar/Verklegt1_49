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
void SalaryService:: parseString (string line) {
    
    string property = "";
    vector <string> properities;
    
    for (unsigned int i = 0; i <= line.length(); i++) {
        if (line [i] == ',' || line.length() -1) {
            property += line[i];
            properities.push_back(property);
            property = "";
        }
        else {
            property += line[i];
        }
    }
    for (size_t i = 0; i < properities.size(); i++) {
        cout << properities[i];
    }
}
