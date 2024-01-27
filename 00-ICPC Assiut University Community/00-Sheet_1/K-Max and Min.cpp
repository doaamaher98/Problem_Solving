/*
Given 3 numbers A, B and C, Print the minimum and the maximum numbers.

Input
Only one line containing 3 numbers A, B and C ( - 105 ≤ A, B, C ≤ 105)

Output
Print the minimum number followed by a single space then print the maximum number.
*/
#include <iostream>
using namespace std;

int main ()
{
    int num_A, num_B, num_C;
    int min = 0, max = 0;

    cout << "Enter A,B and C : "<<endl;
    cin >> num_A >> num_B >> num_C;

    if ((num_A >= -150 && num_A <= 105) && (num_B >= -150 && num_B <= 105) && num_C >= -150 && num_C <= 105)
    {
        // Checking the min and max among them
        if ((num_A > num_B) && (num_B > num_C))
        {
            max = num_A;
            min = num_C;
        }
        else if ((num_B > num_A) && (num_A > num_C))
        {
            max = num_B;
            min = num_C;
        }
         else if ((num_C > num_B) && (num_B > num_A))
        {
            max = num_C;
            min = num_A;
        }
        else if ((num_C > num_A) && (num_A > num_B))
        {
            max = num_C;
            min = num_A;
        }

        cout << "Min is = " <<min<<endl;
        cout << "Max is = " <<max<<endl;
    }
    else
    {
        cout <<"Invalid Range";
    }
}