#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    double a, b;
    cout << "¬ведите числа a и b (ax + b = 0): ";
    cin >> a >> b;
    cout << "x = " << -b/a;
}
