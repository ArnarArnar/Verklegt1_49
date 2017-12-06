//
//  Invalid_Name_Exception.cpp
//  monthly salary
//
//  Created by Oddný Karen Arnardóttir on 06/12/2017.
//  Copyright © 2017 Oddný Karen Arnardóttir. All rights reserved.
//

#include "Invalid_Name_Exception.hpp"


Invalid_Name_exception::Invalid_Name_exception (string message) {
    
    this -> message = message;
    
}
string Invalid_Name_exception:: getMessage() {
    
    return message;
}
