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

		switch(choice)
		{
			case 1:
				// do option #1
				break;
			
			case 2:
				// do option #2
				break;
				
			case 3:
				// do option #3
				break;
				
			case 4:
				// do option #4
				break;
			
			case 5:
				// do option #5 - quit
				break;
			
			default:
				cout << "Incorrect choice!" << endl;
		}
    } while (choice < 1 || choice > 5);
    
    return 0;
}

