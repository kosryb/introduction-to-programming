#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    cout << "Введите целое число А ";
    cin >> a;
    if (a == 0)
        cout << "Нулевое число";
    else {
        cout << ((a < 0)? "Отрицательное" : "Положительное") << " " << ((abs(a) % 2 == 0)? "четное" : "нечетное") << " число";
    }
}
