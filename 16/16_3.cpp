#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    vector <int> w(n);
    w[0] = a;
    w[1] = b;
    w[2] = a + b;
    for (int i = 3; i < n; i++) {
        w[i] = w[i - 1] * 2;
    }
    for (int i = 0; i < n; i++) {
        cout << w[i] << " ";
    }
}
