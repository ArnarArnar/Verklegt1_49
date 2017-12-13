#include "adminui.h"


AdminUI::AdminUI(){ }

void AdminUI::AdminMenuUI(){
    char selection = '\0';
    while (selection != '0') {
        /*
        cout << "S: Edit pizza sizes and price" << endl;
        cout << "T: Edit toppings selection" << endl;
        cout << "M: Edit menu" << endl;
        cout << "I: Edit items for sale" << endl;
        cout << "P: Edit prices" << endl;
        cout << "O: Edit outlets" << endl;
*/
        cout << "1. load toppings from textfile" << endl;
        cout << "2. View all toppings in vector" << endl;
        cout << "3. Add some toppings *new* with vector!" << endl;
        cout << "4. Overwrite and store all topping in memory to TXT" << endl;
        cout << "5. TEST" << endl;
        cout << "0: Return to menu" << endl;
        cout << endl;

        cout << "Menu>Admin: ";
        cin >> selection;
        switch (selection) {
        case '1': {
            toppingVector = toppingService.FillToppingsVectorFromTXTService();
        }
        break;
        case '2': {
            cout << "Get all toppings" << endl;
            cout << toppingVector;
            cout << endl;
        }
        break;
        case '3': {
            cin >> toppingVector;

            //ToppingService add;
            //add.addToppingsVector(toppingVector);
        }
        break;
        case '4': {
            toppingService.storeAllToppingsToTXTservice(toppingVector);
        }
        break;
        case '5': {

        }
        break;

        case 't':
        case 'T': {
            // Topping topping;
            // topping.set_toppings();
            cout << endl;
        }
        break;

        case 'm':
        case 'M': {
            cout << endl;
        }
        break;


        case 'i':
        case 'I': {
            cout << endl;
        }
        break;


        case 'p':
        case 'P': {
            cout << endl;
        }
        break;


        case 'o':
        case 'O': {
            cout << endl;
        }
        break;
        case '0': {
            //MainUI welcomeMenu;
            //welcomeMenu.welcomeUI();
            cout << endl;
        }
        break;
        }
    }
}
