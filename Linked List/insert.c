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

int count(struct node *p)
{
    int cnt=0;
    while(p!=NULL)
    {
        cnt++;
        p=p->next;
    }
    return cnt;
}


void insert(struct node *p,int ind,int key)
{
    struct node *t;
    t=(struct node *)malloc(sizeof(struct node));
    t->data=key;
    if(ind<0 || ind>count(new))
    {
        printf("Invalid\n");
        return;
    }
    if(p==NULL)
    {
        t->next=new;
        t=new;
    }
    else
    {
        for(int i=0;i<ind-1;i++)
        {
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
    }
}


void display(struct node *p)
{
    while(p!=NULL)
    {
        printf(" %d ",p->data);
        p=p->next;
    }
}


int main()
{
    int n;
    int key,ind;
    printf("Enter the number of data items in list\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter list items\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    create(arr,n);
    printf("List items before\n");
    display(new);
    printf("\nEnter index you want to insert\n");
    scanf("%d",&ind);
    printf("Enter key value\n");
    scanf("%d",&key);
    insert(new,ind,key);
    printf("List items after inserting\n");
    display(new);
    return 0;
}