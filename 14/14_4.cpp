#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    double n, s = 1000;
    int k = 0;
    cout << "Введите процент по вкладу (0 < N < 25): ";
    cin >> n;
    if (n < 0 || n > 25)
        return 0;
    while (s < 1100) {
        s += s/n;
        k++;
    }
    cout << "До превышения лимита вклада на сумму 1100р. понадобится: " 
        << k << " месяцев " << "\nИтоговый размер вклада: " << s << " руб.";
}
