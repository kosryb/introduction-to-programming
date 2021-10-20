#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int n;
    cout << "Введите целое положительное число n: ";
    cin >> n;
    n = abs(n);
    cout << "Этот год относится к " << n / 100 + ((n % 100 == 0)? 0 : 1) << "-столетию";
}
