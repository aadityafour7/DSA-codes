#include<stdio.h>

void fun1(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        fun1(n-1);
    }
}

void fun2(int n)
{
    if(n>0)
    {
        fun2(n-1);
        printf("%d ",n);
    }
}

int fun3(int n)
{
    if(n>0)
    {
        return fun3(n-1)+n;
    }
    return 0;
}

int fun4(int n)
{
    static int x=0;
    if(n>0)
    {
        x++;
        return fun4(n-1)+x;
    }
    return 0;
}
int main()
{
    int x=5;
    fun1(x);
    printf("\n");
    fun2(x);
    printf("\n%d",fun3(x));
    printf("\n%d",fun4(x));
    return 0;
}