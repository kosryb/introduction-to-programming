#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

void ab(double &n) {
    n = abs(n);
}

int main()
{
    setlocale(LC_ALL, "Rus");
    double v1, v2, t;
    double s;
    cout << "Введите скорость автомобилей км/ч v1 и v2: ";
    cin >> v1 >> v2;
    cout << "Введите расстояние между ними s: ";
    cin >> s;
    cout << "Введите t часов: ";
    cin >> t;
    ab(s);
    ab(v1);
    ab(v2);
    ab(t);
    cout << "Расстояние между ними через " << t << " часов = " << s + t * (v1 + v2);
}
