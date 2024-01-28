/*
Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".

For example: In 4569 the first digit is 4, the second digit is 5, the third digit is 6 and the fourth digit is 9.

Input
Only one line containing a number X (999 < X  ≤  9999)

Output
If the first digit is even print "EVEN" otherwise print "ODD".
*/

#include <iostream>
using namespace std;

int main()
{
    int num_X;
    
    cout <<"Enter the number : "<<endl;
    cin >> num_X;

    if (num_X > 999 && num_X <= 9999)
    {
        while (num_X >= 10)
        {
            // Getting the first number
            num_X /= 10;
        }

        cout << "First number is " << num_X <<endl;

        // Check if its even or odd
        if (num_X % 2 == 0)
        {
            cout << "EVEN";
        }
        else
        {
            cout << "ODD";
        }
                    
    }
    else
    {
        cout <<"Invalid range";
    }
}