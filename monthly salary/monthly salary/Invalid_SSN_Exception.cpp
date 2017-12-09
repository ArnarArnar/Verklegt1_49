//
//  Invalid_SSN_Exception.cpp
//  monthly salary
//
//  Created by Oddný Karen Arnardóttir on 06/12/2017.
//  Copyright © 2017 Oddný Karen Arnardóttir. All rights reserved.
//

#include "Invalid_SSN_Exception.hpp"

Invalid_SSN_exception::Invalid_SSN_exception() {


}

Invalid_SSN_exception::Invalid_SSN_exception (string message) {

    this -> message = message;

}
string Invalid_SSN_exception:: getMessage() {

    return message;
}
bool Invalid_SSN_exception:: isValdSNN(string ssn) {

    bool retVal = false;

    for (int i = 0; i < ssn.size(); i++) {
        if (!isdigit(ssn[i]) && !isspace(ssn[i])) {
        retVal = true;
        }
    }
    
    if (retVal == true && ssn.size() != 10) {
        retVal = false;;
    }
    
    return retVal;
}




