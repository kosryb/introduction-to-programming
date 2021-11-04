#include <iostream>
#include <cmath>
#include <locale>
#include <vector>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int n;
    double s = 1;
    cout << "Введите целое число N: ";
    cin >> n;
    n = abs(n);
    for (int i = 1; i <= n; i++) {
        s = s * (1 + 0.1 * i);
    }
    cout << "произведение 1.1 · 1.2 · 1.3 · . . . (N сомножителей) = " << s;
}
