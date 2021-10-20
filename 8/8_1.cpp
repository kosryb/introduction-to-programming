#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int n;
    cout << "Введите число n(кол-во байтов): ";
    cin >> n;
    cout << "Кол-во полных Кб n = " << n / 8;
}
