#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int k, n;
    cout << "������� ����� ����� k(���������� ����) � n (0 < n < 8): ";
    cin >> k;
    k = abs(k);
    if (k > 365 || n <= 0 || 8 <= n) {
        cout << "ERROR";
        return 0;
    }
    cout << "����� ��� ������ ��� K-�� ��� ���� = " << (k + n - 1) % 7 + 1;
}
