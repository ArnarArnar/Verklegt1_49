//
//  Invalid_Salary_Exception.hpp
//  monthly salary
//
//  Created by Oddný Karen Arnardóttir on 06/12/2017.
//  Copyright © 2017 Oddný Karen Arnardóttir. All rights reserved.
//

#ifndef Invalid_Salary_Exception_hpp
#define Invalid_Salary_Exception_hpp

#include <stdio.h>
#include <string>
using namespace std;

class Invalid_Salary_exception {
    
public:
    Invalid_Salary_exception (string message);
    string getMessage();
    
private:
    string message;
    
};




#endif /* Invalid_Salary_Exception_hpp */
