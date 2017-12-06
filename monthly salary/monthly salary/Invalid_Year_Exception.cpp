//
//  Invalid_Year_Exception.cpp
//  monthly salary
//
//  Created by Oddný Karen Arnardóttir on 06/12/2017.
//  Copyright © 2017 Oddný Karen Arnardóttir. All rights reserved.
//

#include "Invalid_Year_Exception.hpp"

Invalid_Year_exception::Invalid_Year_exception (string message) {
    
    this -> message = message;
    
}
string Invalid_Year_exception:: getMessage() {
    
    return message;
}
