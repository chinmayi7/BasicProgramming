//Question:  Write a Program to Add Two Integer Numbers Entered by User
#include <iostream>
using namespace std;
int main()
{
    int num1, num2, add;
    cout << "Enter any two Integer numbers" << endl;
    cin >> num1 >> num2;
    add = num1 + num2;
    cout << "Addition of the numbers " << num1 << " and " << num2 << " is : " << add;
}