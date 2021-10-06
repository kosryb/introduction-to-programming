#include <iostream>
#include <locale.h>
using namespace std;

int main() 
{
    int a, b;
    setlocale(LC_ALL, "Rus");
    cout << "Введите стороны прямоугольника:" << endl;
    cin >> a >> b;
    cout << "S = " << a * b << " " << "P = " << a + a + b + b;
} 