#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int Quarter(double x, double y)
{
    if (x > 0 && y > 0)
        return 1;
    if (x > 0 && y < 0)
        return 4;
    if (x < 0 && y > 0)
        return 2;
    if (x < 0 && y < 0)
        return 3;
    return -1;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    double x, y;
    cout << "Введите координаты х и у: ";
    cin >> x >> y;
    cout << "Точка находится в четверти " << Quarter(x, y);
}
