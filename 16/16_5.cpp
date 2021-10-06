#include <iostream>
#include <vector>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");
    int n;
    cout << "Введите целое число N (размер массива): ";
    cin >> n;
    vector <int> w(n);
    cout << "Введите элементы массива: " << endl;
    for (int i = 0; i < n; i++)
        cin >> w[i];
    cout << "Элементы массива с нечетными номерами в порядке возрастания номеров, а затем — элементы с четными номерами в порядке убывания номеров" << endl;
    for (int i = 0; i < n; i += 2)
        cout << w[i] << " ";
    n = (n % 2 == 0)? n: n - 1;
    for (int i = n - 1; i >= 0; i -= 2)
        cout << w[i] << " ";
}
