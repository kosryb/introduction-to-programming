#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int a, b;
    cout << "������� ������������� ��������� ����� � � �:" << endl;
    cin >> a >> b;
    a = abs(a);
    b = abs(b);
    cout << "����� ������� = " << a + b << "\n�������� ������� = " << a - b << 
        "\n������������ ������� = " << a * b << "\n������� ������� = " << 1.0 * a / b;
}