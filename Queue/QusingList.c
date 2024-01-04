#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;

void enqueue()
{
    struct node *t;
    t=(struct node *)malloc(sizeof(struct node));
    if(t==NULL)
    printf("\nQueue is Full\n");
    else
    {
        printf("\nEnter data\n");
        scanf("%d",&t->data);
        t->next=NULL;
        if(front==NULL)
        {
            front=rear=t;
        }
        else
        {
            rear->next=t;
            rear=t;
        }
    }
}

void dequeue()
{
    struct node *p;
    if(front==NULL)
    printf("\nEmpty queue\n");
    else
    {
        p=front;
        front=front->next;
        printf("\nDeleted data is %d ",p->data);
        free(p);
    }
}


void display()
{
    struct node *a=front;
    while(a!=NULL);
    {
        printf(" %d ",a->data);
        a=a->next;
    }
    printf("\n");
}


int main()
{
    int choice=1;
    while (choice)
    {
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\nEnter option\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
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