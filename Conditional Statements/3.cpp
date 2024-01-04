// sum of even numbers
#include<iostream>
using namespace std;
int main ()
{
    int a;
    cout<<"Enter number : ";
    cin>>a;
    int i=1;
    int sum=0;
    while(i<=a)
    {
        sum = sum + 2*i;
        i++;
    }
    cout<<"The sum of first "<<a<<" even numbers is "<<sum;
    return 0;
}