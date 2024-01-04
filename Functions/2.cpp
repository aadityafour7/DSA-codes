// function to find odd or even number
#include<iostream>
using namespace std;
bool OddEven(int a)
{
    if(a%2==0)
    return 1;
    else
    return 0;
}
int main ()
{
    int ans=OddEven(23);
    cout<<ans;
    return 0;
}