#include <iostream>
#include <vector>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");
    int n;
    cout << "Введите число n:";
    cin >> n;
    vector <int> w(n);
    w[0] = 1;
    cout << "Массив от 1 до n по нечетным индексам:" << endl;
    cout << w[0] << " ";
    for (int i = 1; i < n; i++) {
        w[i] = w[i - 1] + 2;
        cout << w[i] << " ";
    }
}
