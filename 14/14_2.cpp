#include <iostream>
#include <cmath>
#include <locale>
#include <vector>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int a, b;
    cout << "Введите целые числа А и В (A > B): ";
    cin >> a >> b;
    while (a - b > 0)
        a -= b;
    cout << a;
}
