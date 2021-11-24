#include <iostream>
using namespace std;

int fib(int n, int &k)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    k++;
    return fib(n - 1, k) + fib(n - 2, k);
}
 
int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите целое число n: ";
    cin >> n;
    int f1 = 1, f2 = 1, f = 0, k = 2;
    while (f < n) {
        k++;
        f = f2 + f1;
        f2 = f1;
        f1 = f;
    }
    if (f == n)
        cout << "k = " << k;
    else
        cout << "Error";
    return 0;
}
