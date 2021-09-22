// Question: Write a Program to Display Fibonacci Series upto nth term (n is entered by user)
#include<iostream>
using namespace std;
int main()
{
    int n, a=0, b=1, fib=0;
    
    cout<<"Enter a number"<<endl;
    
    cin>>n;
    //fib=a+b;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++)
    {
        fib=fib+i;
        cout<<fib<<" ";
       
    }

}