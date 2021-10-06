#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, l, r;
    cin >> n;
    vector <int> w(n);
    for (int i = 0; i < n; i++)
        cin >> w[i];
    l = 0;
    r = n - 1;
    while (l <= r) {
        cout << w[l] << " ";
        if (l != r)
            cout << w[r] << " ";
        r--;
        l++;
    }
}
