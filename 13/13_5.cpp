#include <iostream>
#include <cmath>
#include <locale>
#include <vector>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int n;
    double a;
    cout << "Введите целое число N: ";
    cin >> n;
    cout << "Введите число A: ";
    cin >> a;
    n = abs(n);
    int s = 0;
    for (int i = 0; i <= n; i++) {
        s += pow(-1, i) * pow(a, i);
    }
    cout << s << endl;
}
