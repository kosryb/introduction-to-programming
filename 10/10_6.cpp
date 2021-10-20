#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, c;
    cout << "Введите целые положительные числа a, b, c (это треугольник): ";
    cin >> a >> b >> c;
    a = abs(a);
    b = abs(b);
    c = abs(c);
    cout << "Треугольник со сторонами " << a << " " << b << " " << c << ((a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)? "" : "не") << " является прямоугольным";
}
