#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int n;
    char s;
    cout << "������� ����������� ����� n: ";
    cin >> n;
    if (n < 0)
        s = '-';
    n = abs(n);
    n = n / 100 + n % 10 * 10 + n % 100 / 10 * 100;
    cout << "�����, ���������� ��� ������������ ���� ��������� ����� = " << s << n;
}
