/*
Given a mathematical expression. The expression will be one of the following expressions: A+B
, A−B
, A∗B
 and A/B
.

Print the result of the mathematical expression.

Input
Only one line contains A,S
 and B
 (1≤A,B≤104)
, S
 is either (+,−,∗,/)
.

Output
Print the result of the mathematical expression.
*/

#include <iostream>
using namespace std;

int main()
{
    int num_A, num_B;
    char exp;
    
    cout << "Enter 2 Numbers and the mathematical expression : "<<endl;
    cin >> num_A >> exp >> num_B;

    if (num_A >= 1)
    {
        switch (exp)
        {
            case '+' :
                cout << "Result = " << num_A + num_B;
            break;
            
            case '-' :
                cout << "Result = " << num_A - num_B;
            break;

            case '*' :
                cout << "Result = " << num_A * num_B;
            break;

            case '/' :
                cout << "Result = " << num_A / num_B;
            break;
        }
    }
    else
    {
        cout << "Invalid Value";
    }
}