#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    double a;
    cout << "Введите значение а в радианах(0 < a < 2*π): ";
    cin >> a;
    if (!(a > 0 && a < 360)) {
        cout << "Error";
        return 0;
    }
    cout << "Угол в радианах = " << a * 180 / acos(-1);
}
