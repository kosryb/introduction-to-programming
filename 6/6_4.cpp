#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "Rus");
    int x;
    cout << "Введите число x" << endl;
    cin >> x;
    cout << "Функция y = 3x^6 − 6x^2 − 7 " << endl;
    cout << "y = " << 3 * pow(x, 6) - 6 * x * x - 7;
} 