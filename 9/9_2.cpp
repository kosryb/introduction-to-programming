#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int k;
    cout << "������� ����� ����� k(���������� ����): ";
    cin >> k;
    k = abs(k);
    if (k > 365) {
        cout << "ERROR";
        return 0;
    }
    cout << "����� ��� ������ ��� K-�� ��� ���� = " << (k - 1) % 7 + 1;
}
