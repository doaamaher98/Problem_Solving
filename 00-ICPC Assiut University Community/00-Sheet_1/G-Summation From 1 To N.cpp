/* Given a number N
. Print the summation of the numbers that is between 1 and N
 (inclusive).
*/

#include <iostream>

using namespace std;

int main ()
{
    int N, sum=0;
    
    cout << "Enter the Number : " <<endl;
    cin >> N;
    for (int itr=1; itr<=N; itr++)
    {
        sum += (N-itr);
    }

    sum += N;
    cout << "Result of Summation is = " <<sum;
}