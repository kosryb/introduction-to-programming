#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, c;
    cout << "Введите целые положительное число a: ";
    cin >> a;
    a = abs(a);
    cout << "Данное число является " << ((a % 2 == 0)? "" : "не") << "четным " << ((a > 9 && a < 100)? "" : "не") << "двузначным";
}
