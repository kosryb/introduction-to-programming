#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int a, b;
    cout << "Введите положительные целые числа а и в, если a > b: ";
    cin >> a >> b;
    if (!(a > b)) {
        cout << "Ошибка";
        return 0;
    }
    cout << "Количество отрезков B, размещенных на отрезке A = " << a / b;
}
