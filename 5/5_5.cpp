#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x1, x2, x3, y1, y2, y3;
    cout << "Enter the coordinates of the first point (it is a triangle):" << endl;
    cin >> x1 >> y1;
    cout << "Enter the coordinates of the second point (it is a triangle):" << endl;
    cin >> x2 >> y2;
    cout << "Enter the coordinates of the third point (it is a triangle):" << endl;
    cin >> x3 >> y3;
    double a = sqrt((y1 - y2) * (y1 - y2) + (x1 - x2) * (x1 - x2));
    double b = sqrt((y1 - y3) * (y1 - y3) + (x1 - x3) * (x1 - x3));
    double c = sqrt((y3 - y2) * (y3 - y2) + (x3 - x2) * (x3 - x2));
    cout << "P = " << a + b + c << endl;
    double p = (a + b + c) / 2;
    cout << "S = " << sqrt(p * (p - a) * (p - b) * (p - c)) << endl;
}
