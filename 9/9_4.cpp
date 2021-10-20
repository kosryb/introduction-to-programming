#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int a, b, c;
    cout << "¬ведите целые положительные числа a, b, c: ";
    cin >> a >> b >> c;
    a = abs(a);
    b = abs(b);
    c = abs(c);
    int n = (a / c) * (b / c);
    cout << " оличество квадратов квадратов со стороной C, размещенных на пр€моугольнике = " << n << endl;
    cout << "S незан€той части пр€моугольника = " << a * b - n * c * c;
}
