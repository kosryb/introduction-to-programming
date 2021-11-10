#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int Sign(double a)
{
    if (a < 0)
        return -1;
    else if (a > 0)
        return 1;
    return 0;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    double w;
    cout << "Введите вещественное число: ";
    cin >> w;
    cout << Sign(w);
}
