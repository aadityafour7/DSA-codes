// WAP to print numbers from 1 to 10 in such a way that when number is odd add 1 and when number is even subtract 1

#include<stdio.h>
#include<conio.h>
void odd();
void even();
int a=1;
void odd()
{
    if(a<=10)
    {
        printf("%d",a+1);
        a++;
        even();
    }
    return;
}
void even()
{
    if(a<=10)
    {
        printf("%d",a-1);
        a++;
        odd();
    }
    return;
}
int main()
{
    odd();
    return 0;
}