#include<stdio.h>
void swap(int* a,int* b)
{
    int tmp=*a;
    *a=*b;
    *b=tmp;
}
int main()
{
    int n;
    int j,k;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nBefore sorting\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(j=k=i;j<n;j++)
        {
            if(arr[j]<arr[k])
            k=j;
        }
        swap(&arr[i],&arr[k]);
    }
    printf("\nAfter Sorting\n");
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    return 0;
}