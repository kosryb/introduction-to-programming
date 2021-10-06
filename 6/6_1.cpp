#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "Rus");
    int a, b;
    cout << "Введите числа а и в:" << endl;
    cin >> a >> b;
    int c = a;
    a = b;
    b = c;
    cout << a << " " << b;
} 