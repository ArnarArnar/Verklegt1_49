#include "Invalid_Name_Exeption.h"

Invalid_Name_exception:: Invalid_Name_exception() {


}
Invalid_Name_exception::Invalid_Name_exception (string message) {

    this -> message = message;

}
string Invalid_Name_exception:: getMessage() {

    return message;
}
bool Invalid_Name_exception::isValdName(string name) {

    bool retVal = false;

    for (int i = 0; i < name.size(); i++) {

        if (!isalpha(name[i]) && !isspace(name[i])) {
                retVal = true;
        }
    }
    return retVal;
}
