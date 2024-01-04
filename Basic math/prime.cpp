#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main ()
{
    int n;
    cout<<"Enter number\n";
    cin>>n;
    if(isPrime(n))
    {
        cout<<"Number is prime";
    }
    else
    {
        cout<<"Number is not prime";
    }
}