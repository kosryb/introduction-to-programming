#include <iostream>
#include <locale.h>
using namespace std;

int main() 
{
    double d;
    setlocale(LC_ALL, "Rus");
    cout << "Введите диаметр окружности:" << endl;
    cin >> d;
    cout << "L = " << d * 3.14;
}