// Question: Write a Program to Calculate Sum of first N Natural Numbers (here value of N is Entered by user)
#include<iostream>
using namespace std;
int main()
{
    int n, sum=0;
    cout<<"Enter number of element"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    cout<<"sum = "<<sum;
}