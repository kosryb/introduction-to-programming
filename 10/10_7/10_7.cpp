#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, c;
    cout << "Введите целые положительные числа a, b, c: ";
    cin >> a >> b >> c;
    a = abs(a);
    b = abs(b);
    c = abs(c);
    cout << ((a + b > c && a + c > b && b + c > a)? "Существует" : "Не существует") << " треугольник со сторонами " << a << " " << b << " " << c;
}
