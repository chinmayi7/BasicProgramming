// Question: Write a Program which accepts coefficients of a quadratic equation from the user and displays the roots (both real and complex roots depending upon the discriminant).
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float x1, x2, imaginaryPart, realPart, discriminant, a, b, c;
    cout << "Enter the value of a, b, c: " << endl;
    cin >> a >> b >> c;
    discriminant = (b * b - 4 * a * c);
    if (discriminant > 0)
    {
        cout << "Roots are real and difference" << endl;
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << " x1 = " << x1 << " x2 = " << x2;
    }
    else if (discriminant == 0)
    {
        cout << "Roots are real and equal" << endl;
        x1 = x2 = -b / (2 * a);
        cout << "x1 = x2 = " << x1;
    }
    else if (discriminant < 0)
    {
        cout << "Roots are real and imaginary: " << endl;
        realPart = -b / (2 * a);
        imaginaryPart = (sqrt(-discriminant)) / (2 * a);
        cout << realPart << " + "
             << " i " << imaginaryPart << endl;
        cout << realPart << " - "
             << " i " << imaginaryPart << endl;
    }
}