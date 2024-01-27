/*
Given two numbers A and B. Print "Multiples" if A is multiple of B or vice versa. Otherwise print "No Multiples".

Input
Only one line containing two numbers A, B (1  ≤  A, B  ≤  106)

Output
Print the "Multiples" or "No Multiples" corresponding to the read numbers.
*/

#include <iostream>
using namespace std;

int main()
{
    int num_A,num_B;
    cout << "Enter A and B : " <<endl;
    cin >> num_A >> num_B ;

    if ((num_A >= 1 && num_A <= 106) && (num_B >= 1 && num_B <= 106))
    {
        // Check if A is a multiple of B or vise versa
        if ((num_A % num_B == 0) || (num_B % num_A == 0))
        {
            cout << "Multiples";
        }
        else
        {
            cout << "No Multiples";
        }
    }
    else
    {
        cout << "Invalid Range";
    }
}