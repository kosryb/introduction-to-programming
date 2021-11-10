#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

double RingS(double r1, double r2)
{
    return acos(-1) * (r1 * r1 - r2 * r2);
}

int main()
{
    setlocale(LC_ALL, "Russian");
    double r1, r2;
    for (int i = 0; i < 3; i++) {
        cout << "r1 > r2\nr1 = ";
        cin >> r1;
        cout << "r2 = ";
        cin >> r1;
        cout << "S = " << RingS(r1, r2) << endl;
    }
}
