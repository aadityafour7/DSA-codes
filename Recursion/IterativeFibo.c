#include<stdio.h>

int fibo(int n)
{
    int t0=0;
    int t1=1;
    int s;
    if(n<=1)
    return n;
    for(int i=1;i<=n;i++)
    {
        s=t0+t1;
        t0=t1;
        t1=s;
    }
    return s;
}
int main()
{
    int x=4;
    printf("%d ",fibo(x));
    return 0;
}