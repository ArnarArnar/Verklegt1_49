//
//  Invalid_Month_Exeption.hpp
//  monthly salary
//
//  Created by Oddný Karen Arnardóttir on 06/12/2017.
//  Copyright © 2017 Oddný Karen Arnardóttir. All rights reserved.
//

#ifndef Invalid_Month_Exeption_hpp
#define Invalid_Month_Exeption_hpp

#include <stdio.h>
#include <string>
using namespace std;

class Invalid_Month_exception {
    
public:
    Invalid_Month_exception (string message);
    string getMessage();
    
private:
    string message;
    
};

#endif /* Invalid_Month_Exeption_hpp */
