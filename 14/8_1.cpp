#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int n;
    cout << "Введите число n(количество байтов): ";
    cin >> n;
    cout << "Количество полных Кб в n байтах = " << n / 8;
}
