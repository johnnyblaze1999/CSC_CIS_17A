/*
 *            PROGRAMMER: Paul J. Conrad
 *         PROBLEM TITLE: ArrayNoBoundsCheck
 *    PROBLEM DEFINITION: Demonstrates what happens if we read/write array elements outside of
 *                        of the subscript range of a given array.
 *                  DATE: 5/22/2017
 *     SYSTEM - HARDWARE: Intel i7/ARM (Raspberry Pi 3)
 *            - SOFTWARE: Windows 7/10/Debian Linux
 *         Input Devices: Keyboard
 *        Output Devices: Terminal Screen
 *
 *   PROGRAM ASSUMPTIONS: Program does not assume to do any bounds checking to demonstrate
 *                        what happens if the programmer does not check for valid array subscripts
 *                        (C++ does not check, but Java does!!!).
 */

// All necessary include directives here
#include <iostream>
using namespace std;

void display_array(int a[], int sz)
{
    for(int i=0;i<sz;i++)
    {
        cout << a[i] << " ";
        if ( (i+1)%5==0 ) cout << endl; // after every 5th element display, start a new line
    }
    cout << endl;
}

// main function here
int main()
{
    // your main program goes here
	int a[4] = { 1,2,3,4 };
	int b[4] = { 11,12,13,14 };
	int c[4] = { 21,22,23,24 };

        cout << a << endl;
        cout << b << endl;
        cout << c << endl << endl;
        
	cout << "Contents of array a:" << endl;
	display_array(a,4);

	cout << "Contents of array b:" << endl;
	display_array(b,4);

	cout << "Contents of array c:" << endl;
	display_array(c,4);

	cout << endl << "Buggy code ahead..." << endl;

	// writing to subscript 5 in b...
	b[5]=100;
	// writing to subscript -1 in b...
	b[-1]=1000;

	cout << "Contents of array a:" << endl;
	display_array(a,4);

	cout << "Contents of array b:" << endl;
	display_array(b,4);

	cout << "Contents of array c:" << endl;
	display_array(c,4);

	return 0; // this line is optional
}

// future (chap. 6+): function implementations go here - delete this line if you are not using functions
// if you are not using functions, you may delete this line and the above line.
