#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    double a1, b1, a2, b2, c1, c2, d, d1, d2;
    cout << "¬ведите числа a1, b1, c1 (a1*x + b1*y = c1): ";
    cin >> a1 >> b1 >> c1;
    cout << "¬ведите числа a2, b2, c2 (a2*x + b2*y = c2): ";
    cin >> a2 >> b2 >> c2;
    d = a1 * b2 - b1 * a2;
    d1 = c1 * b2 - b1 * c2;
    d2 = a1 * c2 - c1 * a2;
    cout << "x = " << d1 << "/" << d << "\ny = " << d2 << "/" << d;
}
