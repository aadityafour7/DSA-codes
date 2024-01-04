#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*new=NULL;
void create(int a[],int n)
{
    int i;
    struct node *t,*last;
    new=(struct node *)malloc(sizeof(struct node));
    new->data=a[0];
    new->next=NULL;
    last=new;
    for(i=1;i<n;i++)
    {
        t=(struct node *)malloc(sizeof(struct node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void display(struct node *p)
{
    while(p!=NULL)
    {
        printf("%d",p->data);
        p=p->next;
    }
}

int main()
{
    int a[]={1,2,3,4,5};
    create(a,5);
    display(new);
    return 0;
}