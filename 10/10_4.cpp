#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, c;
    cout << "Введите трехзначное число a: ";
    cin >> a;
    if (a < 100 || a > 999) {
        cout << "ERROR";
        return 0;
    }
    a = abs(a);
    cout << "Цифры данного числа образуют " << ((a / 100 >= a / 10 % 10 && a / 10 % 10 >= a % 10)? "убывающую" : "возрастающую") << " последовательность";
}
