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
    vector <string> w = {"", "Один", "Два", "Три", "Четыре", "Пять", "Шесть", "Семь", "Восемь", "Девять",
        "Десять", "Одиннадцать", "Двенадцать", "Тринадцать", "Четырнадцать", "Пятнадцать", "Шестьнадцать", 
        "Семьнадцать", "Восемнадцать", "Девятнадцать", "Двадцать", "Тридцать", "Сорок", "Пятьдесят", "Шестьдесят", 
        "Семьдесят", "Восемьдесят", "Девяноста", "Сто", "Двести", "Триста", "Четыреста", "Пятьсот", "Шестьсот", 
        "Семьсот", "Восемьсот", "Девятьсот"
    };
    cout << "Введите целое число в диапазоне 100-999: ";
    cin >> n;
    if (n < 100 || n > 999)
        return 0;
    cout << w[n / 100 + 27] << " " << ((n % 100 < 21)? w[n % 100] : w[n % 100 / 10 + 18] + " " + w[n % 10] + ((w[n % 10].empty())? "" : " ")) ;
}