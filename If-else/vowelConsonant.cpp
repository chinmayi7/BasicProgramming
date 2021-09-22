// Write a Program to Check Whether a Character is Vowel or Consonant.
#include <iostream>
using namespace std;
int main()
{
    char ch;
    bool isLowercase, isUppercase;
    cout << "Enter a letter" << endl;
    cin >> ch;
    isLowercase = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    isUppercase = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
    if (ch == isLowercase || isUppercase)
    {
        cout << ch << " Vowel";
    }
    else
    {
        cout << ch << " Consonant";
    }
}