#include <iostream>
#include <locale.h>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "Rus");
    int a, b;
    cout << "Введите два ненуливых числа а и в:" << endl;
    cin >> a >> b;
    a *= a;
    b *= b;
    cout << "Сумма квадратов = " << a + b << "\nРазность квадратов = " << a - b <<
        "\nПроизведение квадратов = " << a * b << "\nЧастное квадратов = " << 1.0 * a / b;
}