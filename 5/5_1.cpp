#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x1, y1, x2, y2;
    cout << "Enter the coordinates of the first point (X and Y):" << endl;
    cin >> x1 >> y1;
    cout << "Enter the coordinates of the second point (X and Y):" << endl;
    cin >> x2 >> y2;
    cout << "Distance between points = " << sqrt((y1 - y2) * (y1 - y2) + (x1 - x2) * (x1 - x2));
}
