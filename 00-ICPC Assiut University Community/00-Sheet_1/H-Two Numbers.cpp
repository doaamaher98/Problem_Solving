/*
Given 2 numbers A
 and B
. Print floor, ceil and round of A/B

Note:

Floor: Is a mathematical function that takes a real number X
 and its output is the greatest integer less than or equal to X
.
Ceil: Is a mathematical function that takes a real number X
 and its output is the smallest integer larger than or equal to X
.
Round: Is a mathematical function that takes a real number X
 and its output is the closest integer to that number X
.
*/
#include <iostream>

using namespace std;

int main()
{
    float num_1,num_2;
    float div_value;

    cout <<"Enter the 2 Numbers : " <<endl;
    cin >> num_1 >> num_2 ;

    div_value = (num_1 / num_2);

    cout <<"floor of "<<num_1<<" / "<<num_2<< " = "<< (int)div_value <<endl;
    cout <<"ceil of "<<num_1<<" / "<<num_2<< " = "<< (int)(div_value+1) <<endl;

    if ((div_value - (int)div_value) >= 0.5)
    {
        cout <<"round of if"<<num_1<<" / "<<num_2<< " = "<< (int)(div_value+1) <<endl;
    }
    else 
    {
        cout <<"round of else "<<num_1<<" / "<<num_2<< " = "<< (int)div_value <<endl;
    }    
}