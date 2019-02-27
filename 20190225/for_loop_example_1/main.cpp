// simple for loop example to find the sum of integers from 1 to x,
// and the product of integers from 1 to x (be careful with large values of x!)
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    int x;
    
    // get x from user, must be positive
    do
    {
        cout << "Enter a value for x (greater than zero): ";
        cin >> x;
        
        if ( x > 0 ) break;
        
        cout << "Sorry! x must be greater than zero!" << endl;
    } while ( x <= 0 );
    
    // using for loop to find the sum and product of all integers from 1 to x.
    int sum = 0;
    long product = 1;
    
    /*
    for(int i=1; i <= x; i++ )
    {
        sum += i; // same as sum = sum + i
        product *= i; // same as product = product * i
    }*/
    
    int i=1;
    for( ; ; )
    {
        if ( i <= x )
        {
            sum += i; // same as sum = sum + i
            product *= i++; // same as product = product * i
        }
        else
            break;                
    }
    
    // output our results!
    cout << "Sum of integers from 1 to " << x << " is " << sum << endl;
    cout << "Product of integers from 1 to " << x << " is " << product << endl;
    
    return 0;
}

