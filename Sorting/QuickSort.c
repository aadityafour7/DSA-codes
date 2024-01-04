#include<stdio.h>

void swap(int* p,int* q)
{
    int tmp=*p;
    *p=*q;
    *q=tmp;
}

int main()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the elements in an Array\n");
    for(int k=0;k<n;k++)
    {
        scanf("%d",&arr[k]);
    }
    int i=0;
    int j=n-1;
    int l=j;
    int pivot=arr[i];
    printf("\nElements before Sorting\n");
    for(int k=0;k<n;k++)
    {
        printf(" %d",arr[k]);
    }
    do
    {
        do
        {
            i++;
        } while (arr[i]<=pivot);
        do
        {
            j--;
        } while (arr[j]>pivot);
        if(i<j)
        swap(&arr[i],&arr[j]);
    } while (i<j);
    swap(%arr[l])
}