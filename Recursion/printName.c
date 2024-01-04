#include<stdio.h>
void printName(int n)
{
    if(n==0)
    {
        return;
    }
    printf("Aaditya\n");
    n--;
    printName(n);
}
int main()
{
    int n=5;
    printName(n);
    return 0;
}