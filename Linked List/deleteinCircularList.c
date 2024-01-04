#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*new=NULL;


void create(int arr[],int n)
{
    if(n==0)
    return;
    struct node *t,*last;
    new=(struct node *)malloc(sizeof(struct node));
    new->data=arr[0];
    new->next=NULL;
    last=new;
    for(int i=1;i<n;i++)
    {
        t=(struct node *)malloc(sizeof(struct node));
        t->data=arr[i];
        last->next=t;
        t->next=new;
        last=t;
    }
}


void delete(struct node *p,int n)
{
    if(p==NULL)
    return;
    struct node *q;
    if(n==1)
    {
        do
        {
            q=q->next;
        } while (q!=new);
        q->next=p->next;
        new=p->next;
        free(p);
    }
    else
    {
        for(int i=0;i<n-1;i++)
        {
            q=p;
            p=p->next;
        }
        q->next=p->next;
        free(p);
    }
}
void display(struct node *p)
{
    printf("\nCircular list items are\n");
   do
    {
        printf(" %d ",p->data);
        p=p->next;
    }while(p!=new);
}




int main()
{
    int n;
    int pos;
    printf("Enter the number of list elements\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter List elements \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    create(arr,n);
    printf("\nBefore\n");
    display(new);
    printf("\nEnter position number to delete node\n");
    scanf("%d",&pos);
    delete(new,pos);
    printf("\nAfter\n");
    display(new);
    return 0;
}