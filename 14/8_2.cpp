#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int a, b;
    cout << "������� ������������� ����� ����� � � �, ���� a > b: ";
    cin >> a >> b;
    if (!(a > b)) {
        cout << "������";
        return 0;
    }
    cout << "���������� �������� B, ����������� �� ������� A = " << a / b;
}
