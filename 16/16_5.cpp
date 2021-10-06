#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> w(n);
    for (int i = 0; i < n; i++)
        cin >> w[i];
    for (int i = 0; i < n; i += 2)
        cout << w[i] << " ";
    n = (n % 2 == 0)? n: n - 1;
    for (int i = n - 1; i >= 0; i -= 2)
        cout << w[i] << " ";
}
