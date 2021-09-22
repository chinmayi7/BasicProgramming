//  Question: Write a Program to Check whether a year entered by user is Leap Year or not
#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter a year" << endl;
    cin >> year;
    if (year % 4 == 0 || year % 400 == 0 && year % 100 != 0)
    {
        cout << year << " is a Leap year";
    }
    else
    {
        cout << year << " is not a Leap year";
    }
}