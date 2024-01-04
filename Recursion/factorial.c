#include<stdio.h>
#include<conio.h>
int fact(int n)
{
    if(n==1)
    return 1;
    else
    return n*fact(n-1);
}
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    int ans=fact(a);
    printf("Factorial of number is %d",ans);
    return 0;
}