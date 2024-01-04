// number of set bits
#include<iostream>
using namespace std;
int setBits(int a,int b)
{
    int cnt=0;
    int d;
    int c;
    while(a!=0)
    {
        d=a%2;
        if(d==1)    
        {
            cnt++;
        }
        a=a/2;
    }
    while(b!=0)
    {
        c=b%2;
        if(c==1)
        {
            cnt++;
        }
        b=b/2;
    }
    return cnt;
}
int main ()
{
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    cout<<"The number of set bits are "<<setBits(a,b);
    return 0;
}