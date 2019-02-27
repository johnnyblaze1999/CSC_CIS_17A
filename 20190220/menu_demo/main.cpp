// menu demo - template to help with any assignments
// that call for text based menu driven programs.

#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    int choice; // could this be a char instead?
    do
    {        
        // output the menu title, change it to suit your program
        cout << "My Menu!!!!" << endl;
        cout << endl;

        // output all the options to the screen
        // this template is for 4 menu items and a quit option
        cout << "1. Menu Option #1 Goes Here" << endl;
        cout << "2. Menu Option #2 Goes Here" << endl;
        cout << "3. Menu Option #3 Goes Here" << endl;
        cout << "4. Menu Option #4 Goes Here" << endl;
        cout << "5. Quit" << endl;

        cout << "Please choose an option (1-5): ";
        cin >> choice;

        // test the choices
        if ( choice == 1 )
        {
            // do option #1
        }
        else if ( choice == 2 )
        {
            // do option #2
        }
        else if ( choice == 3 )
        {
            // do option #3
        }
        else if ( choice == 4 )
        {
            // do option #4
        }
        else if ( choice == 5 )
        {
            // do option #5 - quit
            break;
        }
        else
            cout << "Incorrect choice!" << endl;
        
    } while (choice < 1 || choice > 5);
    
    return 0;
}

