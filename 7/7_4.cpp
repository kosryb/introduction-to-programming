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
    cout << "Введите положительные скорости автомобилей v1 и v2: ";
    cin >> v1 >> v2;
    cout << "Введите расстояние между автомобилями s: ";
    cin >> s;
    cout << "Введите пройденные часы: ";
    cin >> t;
    ab(s);
    ab(v1);
    ab(v2);
    ab(t);
    cout << "Расстояние между ними через T часов = " << s + t * (v1 + v2);
}
