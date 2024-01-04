#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int size;
    int front;
    int rear;
    int *Q;
};


void create(struct queue *q,int size)
{
    q->size=size;
    q->front=q->rear=-1;
    q->Q=(int *)malloc(q->size*sizeof(int));
}


void enqueue(struct queue *q,int x)
{
    if(q->rear==q->size-1)
    {
        printf("\nQueue is Full\n");
    }
    else
    {
        q->rear++;
        q->Q[q->rear]=x;
    }
}


void dequeue(struct queue *q)
{
    if(q->front==q->rear)
    {
        printf("\nEmpty Queue\n");
    }
    else
    {
        q->front++;
    }
}


void display(struct queue q)
{
    printf("\nQueue elements are\n");
    for(int i=q.front+1;i<=q.rear;i++)
    {
        printf(" %d ",q.Q[i]);
    }
    printf("\n");
}


int main()
{
    struct queue q;
    int size;
    int val;
    printf("Enter size of Queue\n");
    scanf("%d",&size);
    create(&q,size);
    printf("Enter queue elements\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&val);
        enqueue(&q,val);
    }
    display(q);

}