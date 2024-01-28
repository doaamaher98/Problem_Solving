/*
Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter

Note : difference between 'a' and 'A' in ASCII is 32 .

Input
Only one line containing a character X which will be a capital or small letter.

Output
Print the answer to this problem.
*/
#include <iostream>
using namespace std;

int main()
{
    string Letter;
    string Small,Capital ;
    
    cout << "Enter your upper/lower case letter : "<<endl;
    cin >> Letter;

    // CAPITAL
    if (Letter[0] >= 65 && Letter[0] < 97)
    {
        // Convert it to SMALL
        Small = Letter[0] + 32;
        
        cout << Small <<endl;
    }
    // SMALL
    else
    {
        // Convert it to CAPITAL
        Capital = Letter[0] - 32;
        
        cout << Capital <<endl;
    }




}