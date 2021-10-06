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
    cout << "Функция y = 4(x−3)^6 - 7(x−3)^3 + 2 " << endl;
    cout << "y = " << 4 * pow(x - 3, 6) - 7 * pow(x - 3, 3) + 2;
} 