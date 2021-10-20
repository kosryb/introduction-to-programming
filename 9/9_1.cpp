#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int n;
    cout << "Введите целое число n(количество секунд): ";
    cin >> n;
    n = abs(n);
    cout << "Количество секунд, прошедших с начала последней минуты = " << n % 60;
}
