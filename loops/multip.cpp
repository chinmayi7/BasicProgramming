// Write a Program to Generate Multiplication Table of a number (entered by the user) using a for loop.
#include <iostream>
using namespace std;
int main()
{
    int num, product;
    cout << "Enter a number" << endl;
    cin >> num;
    for (int i = 1; i <= 10; i++)
    {
        product = num * i;
        cout << num << " * " << i << " = " << product << endl;
    }
}