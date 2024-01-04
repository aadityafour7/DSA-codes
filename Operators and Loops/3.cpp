// Fibonacci series
#include<iostream>
using namespace std;
int main ()
{
    int n;
    int a=0,b=1;
    cin>>n;
    cout<<"Fibonacci series"<<endl;
    for(int i=1;i<=n;i++)
    {
        int next=a+b;
        
        cout<<next<<endl;
        a=b;
        b=next;
    }
    return 0;
}