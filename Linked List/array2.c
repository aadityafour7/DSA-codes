#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*new=NULL;
void create(int a[],int n)
{
    int i;
    struct node *t,*last;   // last ptr to traverse through the list
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
    printf("Linked list data\n");
    while(p!=NULL)
    {
        printf("  %d  ",p->data);
        p=p->next;
    }
}
void sum(struct node *p)
{
    int cnt=0;
    while(p!=NULL)
    {
        cnt=cnt+p->data;
        p=p->next;
    }
    printf("\nThe sum is %d",cnt);
}
int main()
{
    int n;
    printf("Enter the number of elements in list\n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    create(a,n);
    display(new);
    sum(new);
    return 0;
}