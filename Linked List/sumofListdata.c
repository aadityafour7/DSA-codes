#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*new=NULL;
void create(int n)
{
    struct node *t,*last;
    last=new;
    t=(struct node *)malloc(sizeof(struct node));
    t->data=n;
    t->next=NULL;
    last->next=t;
    last=t;
    
}
void display(struct node *p)
{
    printf("List data\n");
    while(p!=NULL)
    {
        printf(" %d ",p->data);
        p=p->next;
    }
}
int main()
{
    int choice=1;
    int n;
    new=(struct node *)malloc(sizeof(struct node));
    printf("Enter data\n");
    scanf("%d",&new->data);
    new->next=NULL;
    while(choice)
    {
        printf("Enter data\n");
        scanf("%d",&n);
        create(n);
        printf("Enter 1 for new node creation\n");
        scanf("%d",&choice);
    }
    display(new);
    return 0;
}