#include <iostream>
#include <cmath>
#include <locale>
#include <vector>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    double n;
    cout << "Введите стоимость 1 кг конфет: ";
    cin >> n;
    for (double i = 0; i < 1; i += 0.1)
        cout << i << " кг = " << (i * n) << " руб" << endl;
}
