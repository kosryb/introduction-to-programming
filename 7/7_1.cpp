#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    double a;
    cout << "Введите значение угла α в градусах (0 < a < 360): ";
    cin >> a;
    if (!(a > 0 && a < 360)) {
        cout << "Error";
        return 0;
    }
    cout << "Угол в радианах = " << acos(-1) / 180 * a;
}
