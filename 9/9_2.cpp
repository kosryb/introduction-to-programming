#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int k;
    cout << "Введите целое число k(кол-во дней): ";
    cin >> k;
    k = abs(k);
    if (k > 365) {
        cout << "ERROR";
        return 0;
    }
    cout << "Номер недели для К-ого дня года = " << (k - 1) % 7 + 1;
}
