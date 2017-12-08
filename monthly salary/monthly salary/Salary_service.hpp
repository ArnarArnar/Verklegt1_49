//
//  Salary_service.hpp
//  monthly salary
//
//  Created by Oddný Karen Arnardóttir on 05/12/2017.
//  Copyright © 2017 Oddný Karen Arnardóttir. All rights reserved.
//

#ifndef Salary_service_hpp
#define Salary_service_hpp

#include <stdio.h>
#include "salary_record.hpp"
#include "Salary_repository.hpp"

class SalaryService {

    public:
        void add_salary (const Salary_record& salary_record);
    
    private:
        SalaryRepository sal_repo;
    

};

#endif /* Salary_service_hpp */
