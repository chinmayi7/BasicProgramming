// Write a Program to Find Factorial of a given number N (N is entered by user)
#include <iostream>
using namespace std;
int main()
{
    int n, fac = 1;
    cout << "Enter a number" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        fac *= i;
    }
    cout << fac;
}