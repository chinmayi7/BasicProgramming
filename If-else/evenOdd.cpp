// Question: Write a Program to Check Whether Number is Even or Odd
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a positive number " << endl;
    cin >> num;
    if (num % 2 == 0)
    {
        cout << num << " is Even";
    }
    else
    {
        cout << num << " is Odd";
    }
}
