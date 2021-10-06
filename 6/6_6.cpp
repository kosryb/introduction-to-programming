#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "Rus");
    int a;
    cout << "Введите число A" << endl;
    cin >> a;
    int w = a * a;
    cout << "A^8 = " << w * w * w;
} 