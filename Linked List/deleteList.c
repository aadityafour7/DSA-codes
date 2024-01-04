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


void delete(int n)
{
    struct node *p=new;
    struct node *q=NULL;
    if(n==1)
    {
        new=new->next;
        free(p);
    }
    else
    {
        for(int i=0;i<n-1 && p;i++)
        {
            q=p;
            p=p->next;
        }
        if(p)
        {
            q->next=p->next;
            free(p);
        }
    }
    
}


void display(struct node *p)
{
    printf("List items\n");
    while (p!=NULL)
    {
        printf(" %d ",p->data);
        p=p->next;
    }
    
}
int main()
{
    int n;
    int d;
    printf("Enter the number of elements in list\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the list elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    create(arr,n);
    printf("Before\n");
    display(new);
    printf("\nEnter the number of node for deletion\n");
    scanf("%d",&d);
    delete(d);
    printf("After\n");
    display(new);
    return 0;
}