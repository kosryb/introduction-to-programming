#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int x, a, y;
    cout << "Введите положительное целое число х кг: ";
    cin >> x;
    cout << "Введите положительное целое число а рублей: ";
    cin >> a;
    cout << "Введите положительное целое число y кг: ";
    cin >> y;
    if (a < 0 || x < 0 || y < 0) {
        cout << "Ошибка";
        return 0;
    }
    cout << "Стоимость 1 кг конфет = " << 1.0 * a / x << "\nСтоимость " << y << " кг конфет = " << y * 1.0 * a / x;
}
