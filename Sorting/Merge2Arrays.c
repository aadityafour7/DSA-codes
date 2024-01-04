#include<stdio.h>
void Merge(int a[],int b[],int c,int d)
{
    int size=c+d;
    int ans[size];
    int i,j,k;
    i=0;j=0;k=i;
    while(i<c && j<d)
    {
        if(a[i]<b[j])
        ans[k++]=a[i++];
        else
        ans[k++]=b[j++];
    }
    for(;i<c;i++)
    ans[k++]=a[i];
    for(;j<d;j++)
    ans[k++]=b[j];

    printf("\nArray after Sorting\n");
    for(int t=0;t<size;t++)
    printf(" %d",ans[t]);
}
int main()
{
    int n,m;
    printf("Enter the size of the both arrays\n");
    scanf("%d %d",&n,&m);
    int arr1[n];
    int arr2[m];
    printf("\nEnter Array 1 elements\n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr1[i]);
    printf("\nEnter Array 2 elements\n");
    for(int i=0;i<m;i++)
    scanf("%d",&arr2[i]);
    Merge(arr1,arr2,n,m);
    return 0;
}