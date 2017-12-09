//
//  Invalid_Salary_Exception.cpp
//  monthly salary
//
//  Created by Oddný Karen Arnardóttir on 06/12/2017.
//  Copyright © 2017 Oddný Karen Arnardóttir. All rights reserved.
//

#include "Invalid_Salary_Exception.hpp"

Invalid_Salary_exception::Invalid_Salary_exception() {


}

Invalid_Salary_exception::Invalid_Salary_exception (string message) {
    
    this -> message = message;
    
}
string Invalid_Salary_exception:: getMessage() {
    
    return message;
}
bool Invalid_Salary_exception::isValdSalary(double salary){
   
    if (salary < 10000 || salary > 500000) {
        
        return true;
    }
    else{
        return false;
    }
}
