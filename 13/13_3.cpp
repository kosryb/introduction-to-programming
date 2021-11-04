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
    cout << "Введите целое число N: ";
    cin >> n;
    n = abs(n);
    int s = 0;
    for (int i = 1; i <= (2 * n - 1); i += 2) {
        s += i;
        cout << s << endl;
    }
}
