#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int n, s = 0, k = 1;
    cout << "Введите целое число n (n > 1): ";
    cin >> n;
    if (!(n > 1))
        return 0;
    while (s < n) {
        s += k;
        k++;
    }
    cout << n << " <= " << s;
}
