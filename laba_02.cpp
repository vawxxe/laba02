// laba_02.cpp
// Красноперова Валерія
// Лабораторна робота № 2.1
// Лінійні програми
// Варіант 12

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double alpha;
double z1;
double z2;

const double PI = acos(-1.0);
cout << "alpha = ";
cin >> alpha;
z1 = (sin(4 * alpha) / (1 + cos(4 * alpha))) *
     (cos(2 * alpha) / (1 + cos(2 * alpha)));
z2 = 1.0 / tan(3 * PI / 2 - alpha);

cout << "z1 = " << z1 << endl;
cout << "z2 = " << z2 << endl;
    return 0;
}