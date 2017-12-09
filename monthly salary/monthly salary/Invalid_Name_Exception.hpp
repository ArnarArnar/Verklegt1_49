//
//  Invalid_Name_Exception.hpp
//  monthly salary
//
//  Created by Oddný Karen Arnardóttir on 06/12/2017.
//  Copyright © 2017 Oddný Karen Arnardóttir. All rights reserved.
//

#ifndef Invalid_Name_Exception_hpp
#define Invalid_Name_Exception_hpp
#include <stdio.h>
#include <string>
using namespace std;

class Invalid_Name_exception {
    
public:
    Invalid_Name_exception();
    Invalid_Name_exception (string message);
    string getMessage();
    bool isValdName(string name);
    
private:
    string message;
    
};





#endif /* Invalid_Name_Exception_hpp */
