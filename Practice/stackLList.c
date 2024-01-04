#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*top=NULL;

void push()
{
    struct node *t;
    t=(struct node *)malloc(sizeof(struct node));
    if(t==NULL)
    printf("\nStack Overflow\n");
    else
    {
        printf("\nEnter the data\n");
        scanf("%d",&t->data);
        t->next=top;
        top=t;
    }
}

void pop()
{
    struct node *p=top;
    if(p==NULL)
    printf("\nStack Underflow\n");
    else
    {
        printf("\nPopped data is %d \n",p->data);
        top=top->next;
        free(p);
    }
}

void display()
{
    struct node *p=top;
    while(p!=NULL)
    {
        printf(" %d ",p->data);
        p=p->next;
    }
    printf("\n");
}

int main()
{
    int choice=1;
    while (choice)
    {
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
        printf("\nEnter your choice\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            choice=0;
            break;    
        }
    }
    return 0;
}