#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> w(n);
    w[0] = 1;
    cout << w[0] << " ";
    for (int i = 1; i < n; i++) {
        w[i] = w[i - 1] + 2;
        cout << w[i] << " ";
    }
}
