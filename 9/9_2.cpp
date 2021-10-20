#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int k;
    cout << "Введите целое число k(количество дней): ";
    cin >> k;
    k = abs(k);
    if (k > 365) {
        cout << "ERROR";
        return 0;
    }
    cout << "Номер дня недели для K-го дня года = " << (k - 1) % 7 + 1;
}
