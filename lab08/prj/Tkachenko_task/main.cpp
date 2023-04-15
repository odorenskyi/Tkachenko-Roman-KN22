#include <iostream>
#include <clocale>
#include "ModulesTkachenko.h"

using namespace std;

string copyright() {
    return "(c) Ткаченко Роман";
}

bool result_expression(char a, char b) {
    return  a + 5 > b + 2;
}

string valuesDecHexa_decimal(int x, int y, int z) {
    cout << "В десятковiй: " << endl
         << "'x' -> " << dec << x << endl
         << "'y' -> " << dec << y << endl
         << "'z' -> " << dec << z << endl << endl;
    cout << "В шiстнадцятковiй: " << endl
         << "'x' -> " << hex << x << endl
         << "'y' -> " << hex << y << endl
         << "'z' -> " << hex << z << endl << endl;
    cout << endl << "Результат обчислення виразу: S = " << s_calculation(x, y, z) << endl;
    return "";
}


int main() {
    setlocale(LC_ALL, "ukr");
    cout << copyright() << endl << endl;

    int x, y, z;
    char a, b;

    cout << "Введiть x, y, z: ";
    cin >> x >> y >> z;
    cout << "Введiть символи 'a' та 'b': ";
    cin >> a >> b;

    cout << "Результат виразу: a + 5 > b + 2 -> " << result_expression(a, b) << endl << endl;
    cout << valuesDecHexa_decimal(x, y, z);
    return 0;
}
