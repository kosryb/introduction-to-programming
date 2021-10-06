#include <iostream>
#include <vector>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");
    int n, l, r;
    cout << "Введите целое число N (размер массива): ";
    cin >> n;
    vector <int> w(n);
    for (int i = 0; i < n; i++)
        cin >> w[i];
    l = 0;
    r = n - 1;
    cout << "Элементы массива в следующем порядке: A1, AN , A2, AN−1, A3, AN−2" << endl;
    while (l <= r) {
        cout << w[l] << " ";
        if (l != r)
            cout << w[r] << " ";
        r--;
        l++;
    }
}
