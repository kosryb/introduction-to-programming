#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int n;
    cout << "������� ����� n(���������� ������): ";
    cin >> n;
    cout << "���������� ������ �� � n ������ = " << n / 8;
}
