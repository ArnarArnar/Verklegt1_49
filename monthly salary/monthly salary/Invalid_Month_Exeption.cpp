//
//  Invalid_Month_Exeption.cpp
//  monthly salary
//
//  Created by Oddný Karen Arnardóttir on 06/12/2017.
//  Copyright © 2017 Oddný Karen Arnardóttir. All rights reserved.
//

#include "Invalid_Month_Exeption.hpp"

Invalid_Month_exception::Invalid_Month_exception (string message) {
    
    this -> message = message;
    
}
string Invalid_Month_exception:: getMessage() {
    
    return message;
}
