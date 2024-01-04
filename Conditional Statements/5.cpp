// to check whether the number is prime or not
#include<iostream>
using namespace std;
int main ()
{
    int a;
    cout<<"Enter any number "<<endl;
    cin>>a;
    int i=2;
    while(i<a)
    {
        int n=a%i;
        if(n==0)
        {
            cout<<"The giver number is not prime";
            break;
        }
        else
        {
            cout<<"Number is prime";
            break;
        }
        i++;
    }
    return 0;
}