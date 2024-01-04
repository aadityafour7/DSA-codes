#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
}*new=NULL;
void create(int arr[],int n)
{
    struct node *t,*last;
    new=(struct node *)malloc(sizeof(struct node));
    new->data=arr[0];
    new->next=NULL;
    last=new;
    for(int i=1;i<n;i++)
    {
        t=(struct node *)malloc(sizeof(struct node));
        t->data=arr[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void display(struct node *p)
{
    printf("List data is\n");
    while(p!=NULL)
    {
        printf(" %d ",p->data);
        p=p->next;
    }
}
void MaxElement(struct node *p)
{
    int max=0;
    while(p!=NULL)
    {
        if(p->data>max)
        {
            max=p->data;
            p=p->next;
        }
        else
        p=p->next;
    }
    printf("\nThe max element is %d",max);
}
int main()
{
    int n;
    printf("Enter the number of list elements\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter list data\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    create(arr,n);
    display(new);
    MaxElement(new);
    return 0;
}