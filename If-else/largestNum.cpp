// Question: Write a Program to Find Largest Number Among Three Numbers entered by users
#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout<<"Enter any Three numbers: "<<endl;
    cin>>a>>b>>c;
    if(a>b&&a>c)
    {
        cout<<a<<" is Largest number";
    }
    else if(b>a&&b>c)
    {
        cout<<b<<" is Largest number";
    }
    else
    {
        cout<<c<<" is Largest number";
    }
}