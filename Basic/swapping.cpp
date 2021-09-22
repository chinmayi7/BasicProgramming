// Question: Write a Program to Swap Two Numbers
#include <iostream>
using namespace std;
int main()
{
    int num1, num2, temp;
    cout << "Enter the values of two numbers " << endl;
    cin >> num1 >> num2;

    cout << "Before swapping are: " << num1 << " " << num2<<endl;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "After swapping: " << num1 << " " << num2;
}