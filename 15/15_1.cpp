#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

double PowerA3(double a)
{
    return pow(a, 3);
}

int main()
{
    setlocale(LC_ALL, "Russian");
    double w;
    cout << "Введите вещественное число: ";
    cin >> w;
    cout << "a^3 = " << PowerA3(w);
}
