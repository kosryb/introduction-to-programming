#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

void ab(double &n) {
    n = abs(n);
}

int main()
{
    setlocale(LC_ALL, "Rus");
    double v1, v2, t;
    double s;
    cout << "������� ������������� �������� ����������� v1 � v2: ";
    cin >> v1 >> v2;
    cout << "������� ���������� ����� ������������ s: ";
    cin >> s;
    cout << "������� ���������� ����: ";
    cin >> t;
    ab(s);
    ab(v1);
    ab(v2);
    ab(t);
    cout << "���������� ����� ���� ����� T ����� = " << s + t * (v1 + v2);
}
