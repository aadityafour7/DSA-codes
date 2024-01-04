// nCr function
#include<iostream>
using namespace std;
int factorial(int n)
{
    int ans=1;
    for(int i=1;i<=n;i++)
    {
        ans=ans*i;
    }
    return ans;
}
int nCr(int n,int r)
{
    int num=factorial(n);
    int deno=factorial(r)*factorial(n-r);
    int ans=num/deno;
    return ans;
}
int main()
{
    cout<<"Enter values of nCr"<<endl;
    int a,b;
    cin>>a>>b;
    int answer=nCr(a,b);
    cout<<"Answer is "<<answer<<endl;
    return 0;
}