#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b;
    cout << "Введите положительные целые числа а и в, если a > b: ";
    cin >> a >> b;
    cout << ((a > 2 && b <= 3)? "Справедливы" : "Не справедливы") << " неравенства A > 2 и B ≤ 3";
}