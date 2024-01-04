#include<stdio.h>
int fibo(int n)
{
    if(n==1 || n==0 || n==2)
    return n;
    else
    return fibo(n-1)+fibo(n-2);
}

int main()
{
    int x=5;
    printf("%d ",fibo(x));
    return 0;
}