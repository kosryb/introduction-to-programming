#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the coordinates of points A, B, C on the numeric line (!!!Point C must be located between points A and B!!!):" << endl;
    cin >> a >> b >> c;
    cout << "|AC| * |BC| = " << abs(c - a) * abs(c - b) << endl;
}
