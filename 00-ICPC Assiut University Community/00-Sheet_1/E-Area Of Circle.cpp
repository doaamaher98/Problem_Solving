#include <iostream>
#include<iomanip>

#define     PI      3.141592653

using namespace std;

int main()
{
    double R;
    long double Area;

    cin >> R;
    if ((R >= 1) && (R <= 100))
    {
        Area = (PI)*(R*R);

        cout << fixed << setprecision(9);
        cout << Area;
    }
}
