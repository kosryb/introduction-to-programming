#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, c;
    cout << "Введите четырехзначное число a: ";
    cin >> a;
    a = abs(a);
    if (a < 1000 || a > 9999) {
        cout << "ERROR";
        return 0;
    }
    cout << "Данное число читается " << ((a / 1000 == a % 10 && a / 100 % 10 == a / 10 % 10)? "" : "не") << "одинаково слева направо и справа налево ";
}
