#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int a, b;
    cout << "Введите целые положительные числа а и в, если a > b: ";
    cin >> a >> b;
    if (!(a > b)) {
        cout << "ERROR";
        return 0;
    }
    cout << "Длина незанятой части отрезка A = " << a - a / b * b;
}
