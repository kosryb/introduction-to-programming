#include <iostream>
using namespace std;

int main() 
{
    int a, b;
    cout << "������� ������������� ��������� ����� � � �:" << endl;
    cin >> a >> b;
    a *= a;
    b *= b;
    cout << "����� ������� = " << a + b << "\n�������� ������� = " << a - b <<
        "\n������������ ������� = " << a * b << "\n������� ������� = " << 1.0 * a / b;
}
