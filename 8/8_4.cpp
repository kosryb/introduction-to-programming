#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int n;
    char s;
    cout << "Введите двузначное число n: ";
    cin >> n;
    if (n < 0)
        s = '-';
    n = abs(n);
    n = n % 10 * 10 + n / 10;
    cout << "Число, полученное при перестановке цифр исходного числа = " << s << n;
}
