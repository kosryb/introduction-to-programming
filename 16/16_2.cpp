#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, a, d;
    cin >> n >> a >> d;
    vector <int> w(n);
    w[0] = a;
    cout << w[0] << " ";
    for (int i = 1; i < n; i++) {
        w[i] = w[i - 1] * d;
        cout << w[i] << " ";
    }
}
