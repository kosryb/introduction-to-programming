#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int NOD(int a, int b) {
    if (a < b) {
        swap(a, b);
    }
    while (a % b != 0) {
        a = a % b;
        swap(a, b);
    }
    return b;
}

int main()
{
    setlocale(LC_ALL, "Rus");
    int a, b;
    cout << "Введите целое положительное число A = ";
    cin >> a;
    cout << "Введите целое положительное число B = ";
    cin >> b; 
    cout << NOD(a, b) << endl;
}
