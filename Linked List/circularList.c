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
        t->next=new;
        last->next=t;
        last=t;
    }
}


void displayCircular(struct node *p)
{
    printf("\nCircular List items\n");
    do
    {
        printf(" %d ",p->data);
        p=p->next;
    } while (p!=new);
    
}

int main()
{
    int n;
    printf("Enter the number of list elements\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter List elements \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    create(arr,n);
    displayCircular(new);
    return 0;
}