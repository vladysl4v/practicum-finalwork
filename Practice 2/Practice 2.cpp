﻿// дискримінант
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, d, x1, x2;

    cout << "Enter a ->" << endl;
    cin >> a;
    cout << "Enter b ->" << endl;
    cin >> b;
    cout << "Enter c ->" << endl;
    cin >> c;

    d = b * b - 4 * a * c; 
    if (d > 0) 
    {
        x1 = ((-b) + sqrt(d)) / (2 * a);
        x2 = ((-b) - sqrt(d)) / (2 * a);
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    if (d == 0)
    {
        x1 = -(b / (2 * a));
        cout << "x1 = x2 = " << x1 << endl;
    }
    if (d < 0) 
        cout << "D < 0" << endl;
}