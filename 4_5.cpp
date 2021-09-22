#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int a, b;
    cout << "Введите целочисленные ненулевые числа а и в:" << endl;
    cin >> a >> b;
    a = abs(a);
    b = abs(b);
    cout << "Сумма модулей = " << a + b << "\nРазность модулей = " << a - b << 
        "\nПроизведение модулей = " << a * b << "\nЧастное модулей = " << 1.0 * a / b;
}