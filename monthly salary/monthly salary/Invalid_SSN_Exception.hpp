//
//  Invalid_SSN_Exception.hpp
//  monthly salary
//
//  Created by Oddný Karen Arnardóttir on 06/12/2017.
//  Copyright © 2017 Oddný Karen Arnardóttir. All rights reserved.
//

#ifndef Invalid_SSN_Exception_hpp
#define Invalid_SSN_Exception_hpp

#include <stdio.h>
#include <string>
using namespace std;

class Invalid_SSN_exception {

    public:
        Invalid_SSN_exception();
        Invalid_SSN_exception (string message);
        string getMessage();
        bool isValdSNN(string ssn);
    
    private:
        string message;


};
#endif /* Invalid_SSN_Exception_hpp */
