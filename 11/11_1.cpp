#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b;
    cout << "Введите целые числа a, b: ";
    cin >> a >> b;
    if (a == b) {
        a = 0;
        b = 0;
    }
    a = max(a, b);
    b = max(a, b);
    cout << "a = " << a << " b = " << b;
}
