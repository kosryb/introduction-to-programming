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
    if (abs(b - a) < abs(c - a)) 
        cout << "расположена точка B ближе к А, расстояние АВ = " << abs(a - b);
    else
        cout << "расположена точка C ближе к А, расстояние АC = " << abs(a - c);
}
