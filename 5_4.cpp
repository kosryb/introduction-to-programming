#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x1, x2, y1, y2;
    cout << "Enter the coordinates of the first point (It's a rectangle):" << endl;
    cin >> x1 >> y1;
    cout << "Enter the coordinates of the second point (It's a rectangle):" << endl;
    cin >> x2 >> y2;
    double a = abs(x1 - x2);
    double b = abs(y1 - y2);
    cout << "P = " << a + b + a + b << endl;
    cout << "S = " << a * b << endl;
}
