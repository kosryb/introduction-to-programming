#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int x, a, y;
    cout << "Введите количество х кг конфет: ";
    cin >> x;
    cout << "Введите стоимость 1 кг конфет: ";
    cin >> a;
    cout << "Введите количество у кг конфет: ";
    cin >> y;
    if (a < 0 || x < 0 || y < 0) {
        cout << "ERROR";
        return 0;
    }
    cout << "Стоимость 1 кг = " << 1.0 * a / x << "\nСтоимость " << y << " кг конфет = " << y * 1.0 * a / x;
}
