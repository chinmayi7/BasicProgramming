//Write a program where the user is asked to enter two integers (divisor and dividend) and the quotient and the remainder of their division is computed.(Both divisor and dividend should be integers.)
#include <iostream>
using namespace std;
int main()
{
    int divisor, dividend, reminder, quotient;
    cout << "Enter the value of dividend and divisor : " << endl;
    cin >> dividend >> divisor;
    if (dividend != 0)
    {
        reminder = dividend % divisor;
        quotient = dividend / divisor;
        cout << "Reminder = " << reminder << endl;
        cout << "Quotient = " << quotient << endl;
    }
    else
    {
        throw invalid_argument("math error: can't divide by zero");
    }
}