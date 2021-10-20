#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, c;
    cout << "Введите положительные целые числа a, в, c: ";
    cin >> a >> b >> c;
    cout << ((a < b && b < c)? "Справедливо" : "Не справедливо") << " неравенство a < b < c";
}
