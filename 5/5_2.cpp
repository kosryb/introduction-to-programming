#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the coordinates of points A, B, C on the numeric line:" << endl;
    cin >> a >> b >> c;
    cout << "|AC| = " << abs(c - a) << endl;
    cout << "|BC| = " << abs(c - b) << endl;
    cout << "|AC| + |BC| = " << abs(c - a) + abs(c - b) << endl;
}
