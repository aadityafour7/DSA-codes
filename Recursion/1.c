#include<stdio.h>
#include<conio.h>
int fun(int n)
{
    if(n==1)
    return 1;
    else
    return 1 + fun(n-1);
}
int main ()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    int ans=fun(n);
    printf("%d",ans);
    return 0;

}