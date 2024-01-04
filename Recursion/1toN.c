#include<stdio.h>
void Numbers(int n,int x)
{
    if(n>x)
    return;
    printf(" %d ",n);
    n++;
    Numbers(n,x);
}
int main()
{
    int n,x;
    n=1;
    printf("Enter till where you want to print\n");
    scanf("%d",&x);
    Numbers(n,x);
    return 0;
}