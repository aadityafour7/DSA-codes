#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
}*top=NULL;

void push(int x)
{
    struct node *t;
    t=(struct node *)malloc(sizeof(struct node));
    if(t==NULL)
    {
        printf("\nStack Overflow\n");
    }
    else
    {
        t->data=x;
        t->next=top;
        top=t;
    }
}



void pop()
{
    int x=-1;
    struct node *p;
    if(top==NULL)
    {
        printf("\nStack underflow\n");
    }
    else
    {
        p=top;
        top=top->next;
        x=p->data;
        printf("\nPopped value is %d",x);
        free(p);
    }
    
}

void peek(int x)
{
    struct node *t=top;
    for(int i=0;i<x-1 && top!=NULL;i++)
    {
        t=t->next;
    }
    if(t!=NULL)
    {
        printf("%d",t->data);
    }
    else
    {
        printf("\nNo data found\n");
    }
}


void displaY()
{
    struct node *p;
    p=top;
    printf("\nStack Items\n");
    while(p!=NULL)
    {
        printf(" %d ",p->data);
        p=p->next;
    }
    printf("\n");
}

int main()
{
    int p;
    int pos;
    int choice=1;
    while (choice)
    {
        printf("\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");
        printf("\nEnter your choice\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the element to push\n");
            scanf("%d",&p);
            push(p);  
            break;
        case 2:
            pop();
            break;
        case 3:
            printf("\nEnter the position number\n");    
            scanf("%d",&pos);
            pop(pos);
            break;
        case 4:
            displaY();
            break;
        case 5:
            choice=0;
            break;
        }
    }
    
}