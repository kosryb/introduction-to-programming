#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int k, n;
    cout << "Введите целое число k(количество дней) и n (0 < n < 8): ";
    cin >> k;
    k = abs(k);
    if (k > 365 || n <= 0 || 8 <= n) {
        cout << "ERROR";
        return 0;
    }
    cout << "Номер дня недели для K-го дня года = " << (k + n - 1) % 7 + 1;
}
