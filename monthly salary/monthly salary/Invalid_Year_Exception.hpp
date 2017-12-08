//
//  Invalid_Year_Exception.hpp
//  monthly salary
//
//  Created by Oddný Karen Arnardóttir on 06/12/2017.
//  Copyright © 2017 Oddný Karen Arnardóttir. All rights reserved.
//

#ifndef Invalid_Year_Exception_hpp
#define Invalid_Year_Exception_hpp

#include <stdio.h>
#include <string>
using namespace std;

class Invalid_Year_exception {
    
public:
    Invalid_Year_exception();
    Invalid_Year_exception (string message);
    string getMessage();
    bool isValdYear(int year);
    
private:
    string message;
    
};





#endif /* Invalid_Year_Exception_hpp */
