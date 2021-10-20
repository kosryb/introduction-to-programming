#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, c;
    cout << "Введите числа a, b, c: ";
    cin >> a >> b >> c;
    cout << "Сумма двух наибольших из этих чисел = " << a + b + c - min(a, min(b, c));
}
