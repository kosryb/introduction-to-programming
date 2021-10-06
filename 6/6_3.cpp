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
    int d = c;
    c = a;
    a = b;
    b = d;
    cout << a << " " << b << " " << c;
} 