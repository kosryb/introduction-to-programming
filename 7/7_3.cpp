#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int x, a, y;
    cout << "������� ������������� ����� ����� � ��: ";
    cin >> x;
    cout << "������� ������������� ����� ����� � ������: ";
    cin >> a;
    cout << "������� ������������� ����� ����� y ��: ";
    cin >> y;
    if (a < 0 || x < 0 || y < 0) {
        cout << "������";
        return 0;
    }
    cout << "��������� 1 �� ������ = " << 1.0 * a / x << "\n��������� " << y << " �� ������ = " << y * 1.0 * a / x;
}
