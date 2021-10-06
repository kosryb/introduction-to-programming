#include <iostream>
#include <vector>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");
    int n, a, d;
    cout << "Введите число N, первый член геометрической прогрессии и знаменатель: ";
    cin >> n >> a >> d;
    vector <int> w(n);
    w[0] = a;
    cout << "Массив, содержащий N первых членов геометрической прогрессии:" << endl;
    cout << w[0] << " ";
    for (int i = 1; i < n; i++) {
        w[i] = w[i - 1] * d;
        cout << w[i] << " ";
    }
}
