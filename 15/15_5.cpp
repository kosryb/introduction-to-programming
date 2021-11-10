#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

double Fact2(int n)
{
    long double f = 1;
    for (; n > 1; n -= 2)
        f *= n;
    return f;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите целое число n (n > 0): ";
    cin >> n;
    if (!(n > 0))
        return 0;
    cout << "n!! = " << Fact2(n);
}
