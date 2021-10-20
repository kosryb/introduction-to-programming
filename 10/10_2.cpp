#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, c;
    cout << "Введите целые положительные целые числа a, в, c: ";
    cin >> a >> b >> c;
    a = abs(a);
    b = abs(b);
    c = abs(c);
    cout << ((a < b && b < c)? "Справедливо" : "Не справедливо") << " неравенство " << a << " < " <<  b << " < " << c;
}
