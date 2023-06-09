#include <iostream>
#include<iomanip>

#define     PI      3.141592653

using namespace std;

int main()
{
    long long M,N;

    int last_digit;

    cin >> M >> N;

    last_digit = (M % 10) + (N % 10);

    cout << last_digit;
}
