#include <iostream>
#include <cmath>
#include <locale>
#include <vector>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    vector <string> color = {"зелен", "красн", "желт", "бел", "черн"};
    vector <string> animal = {"ой крысы", "ой коровы", "ого тигра", "ого зайца", "ого дракона", "ой змеи", "ой лошади", "ой овцы", "ой обезьяны", "ой курицы", "ой собаки", "ой свиньи"};
    cout << "Введите год, начиная от 1984: ";
    int year;
    cin >> year;
    cout << "год " + color[(year - 4 + color.size()) % color.size()] + animal[(year - 4 + animal.size()) % animal.size()];
}
