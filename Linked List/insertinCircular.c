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

void insert(struct node *p,int n,int d)
{
    struct node *t;
    t=(struct node *)malloc(sizeof(struct node));
    t->data=d;
    if(n==1 || n==count(new))
    {
        do
        {
            p=p->next;
        } while (p!=new);
        p->next=t;
        t->next=new;
        new=t;
    }
    else
    {
        for(int i=0;i<n-1;i++)
        {
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
    }
}


int count(struct node *p)
{
    int cnt=0;
    if(new==NULL)
    return cnt;
    else
    do
    {
        cnt++;
        p=p->next;
    } while (p!=new);
    return cnt;
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
    int dat;
    printf("Enter the number of elements in circular list\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter list elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    create(arr,n);
    count(new);
    printf("\nBefore\n");
    display(new);
    printf("\nEnter position and data\n");
    scanf("%d %d",&pos,&dat);
    insert(new,pos,dat);
    printf("\nAfter\n");
    display(new);
    return 0;
}