#include <iostream>
#include <cmath>
#include <locale>
#include <vector>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int n, a;
    string c;
    vector <string> w = {"Север", "Запад", "Юг", "Восток"};
    cout << "Введите один из символов: С З Ю В: ";
    cin >> c;
    cout << "Введите цифровую команду от -1 до 1 (0 — продолжать движение, 1 — поворот налево, −1 — поворот направо): ";
    cin >> n;
    if (c == "С")
        a = 0;
    if (c == "З")
        a = 1;
    if (c == "Ю")
        a = 2;
    if (c == "В")
        a = 3;
    a += n;
    a %= 4;
    cout << "Направление: " << w[a];
}
