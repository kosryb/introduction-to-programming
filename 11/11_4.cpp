#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int x, y;
    cout << "Введите ненулевые координаты точки А ";
    cin >> x >> y;
    cout << "Точка А лежит в четверти ";
    if (x > 0 && y > 0)
        cout << "I";
    else if (x < 0 && y > 0)
        cout << "II";
    else if (x < 0 && y < 0)
        cout << "III";
    else
        cout << "IV";
}
