#include <iostream>
#include <locale.h>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "Rus");
    int a, b;
    cout << "Введите два числа a и в:" << endl;
    cin >> a >> b;
    cout << "Среднее арифметическое чисел а и в = " << (a + b) / 2.0;
}