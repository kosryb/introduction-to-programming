#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "Rus");
    int a, b, c;
    cout << "Введите числа а, в и с:" << endl;
    cin >> a >> b >> c;
    int d = b;
    b = a;
    a = c;
    c = d;
    cout << a << " " << b << " " << c;
} 