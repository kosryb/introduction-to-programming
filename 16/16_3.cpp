#include <iostream>
#include <vector>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");
    int n, a, b;
    cout << "Введите целые числа N, A, B: ";
    cin >> n >> a >> b;
    vector <int> w(n);
    w[0] = a;
    w[1] = b;
    w[2] = a + b;
    for (int i = 3; i < n; i++) {
        w[i] = w[i - 1] * 2;
    }
    cout << "Целочисленный массив размера N, первый элемент которого равен A, второй равен B, а каждый последующий элемент равен сумме всех предыдущих" << endl;
    for (int i = 0; i < n; i++) {
        cout << w[i] << " ";
    }
}
