/*
Given two person names.
Each person has {"the first name" + "the second name"}
Determine whether they are brothers or not.
Note: The two persons are brothers if they share the same second name.

Input
First line will contain two Strings F1, S1 which donates the first and second name of the 1st person.

Second line will contain two Strings F2, S2 which donates the first and second name of the 2nd person.

Output
Print "ARE Brothers" if they are brothers otherwise print "NOT".
*/
#include <iostream>
using namespace std;

int main ()
{
    string Person_1_first_name, Person_1_second_name, Person_2_first_name, Person_2_second_name;
    
    cout << "Enter the first Person Name [first second] : "<<endl;
    cin >> Person_1_first_name >> Person_1_second_name;

    cout << "Enter the second Person Name [first second] : "<<endl;
    cin >> Person_2_first_name >> Person_2_second_name ;

    if (Person_1_second_name == Person_2_second_name)
    {
        cout << "ARE BROTHERS";
    }
    else
    {
        cout << "NOT BROTHERS";
    }
}