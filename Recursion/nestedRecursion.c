#include<stdio.h>
int funA(int n)
{
    if(n>100)
    return n-10;
    else
    return funA(funA(n+11));
}

int main()
{
    printf("%d ",funA(95));
    return 0;   
}