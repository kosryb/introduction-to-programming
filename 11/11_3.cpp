#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a1, a2, b1, b2, c1, c2;
    cout << "Введите координаты a, b, c: ";
    cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
    if (sqrt(pow(a1 - b1, 2) + pow(a2 - b2, 2)) < sqrt(pow(a1 - c1, 2) + pow(a2 - c2, 2))) 
        cout << "расположена точка B ближе к А, расстояние АВ = " << sqrt(pow(a1 - b1, 2) + pow(a2 - b2, 2));
    else
        cout << "расположена точка C ближе к А, расстояние АC = " << sqrt(pow(a1 - c1, 2) + pow(a2 - c2, 2));
}
