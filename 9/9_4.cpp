#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int a, b, c;
    cout << "������� ����� ������������� ����� a, b, c: ";
    cin >> a >> b >> c;
    a = abs(a);
    b = abs(b);
    c = abs(c);
    int n = (a / c) * (b / c);
    cout << "���������� ��������� ��������� �� �������� C, ����������� �� �������������� = " << n << endl;
    cout << "S ��������� ����� �������������� = " << a * b - n * c * c;
}
