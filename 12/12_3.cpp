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
    vector <string> w = {"", "Одно", "Два", "Три", "Четыре", "Пять", "Шесть", "Семь", "Восемь", "Девять",
        "Десять", "Одиннадцать", "Двенадцать", "Тринадцать", "Четырнадцать", "Пятнадцать", "Шестьнадцать", 
        "Семьнадцать", "Восемнадцать", "Девятнадцать", "Двадцать", "Тридцать", "Сорок"};
    vector <string> q = {"учебное здание", "учебных зданий"};
    cout << "Введите целое число в диапазоне 10-40: ";
    cin >> n;
    if (n < 1 || n > 40)
        return 0;
    if (n == 1)
        cout << w[1] << " " << q[0];
    else {
        if (n < 21)
            cout << w[n] << " " << q[1];
        else
            cout << w[n / 10 + 18] << " " << w[n % 10] << ((w[n % 10].empty())? "" : " ") << q[1];
    }
}
