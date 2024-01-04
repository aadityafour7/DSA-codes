#include<stdio.h>

void swap(int* x,int* y)
{
    int tmp=*x;
    *x=*y;
    *y=tmp;
}
int main()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nArray before sorting\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            swap(&arr[j],&arr[j+1]);
        }
    }
    printf("\nAfter sorting\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}