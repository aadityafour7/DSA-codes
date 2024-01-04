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
    q->rear=q->front=0;
    q->Q=(int *)malloc(q->size*sizeof(int));
}

void enqueue(struct queue *q,int x)
{
    if((q->rear+1)%q->size==q->front)
    {
        printf("\nQueue is full\n");
    }
    else
    {
        q->rear=(q->rear+1)%q->size;
        q->Q[q->rear]=x;
    }
}


void dequeue(struct queue *q)
{
    int x;
    if(q->front==q->rear)
    {
        printf("\nQueue is empty\n");
    }
    else
    {
        q->front=(q->front+1)%q->size;
        x=q->Q[q->front];
    }
}

void display(struct queue *q)
{
    int i=q->front+1;
    do
    {
        printf(" %d ",q->Q[i]);
        i=(i+1)%q->size;
    } while (i!=(q->rear+1)%q->size);
    printf("\n");
}



int main()
{
    struct queue q;
    int size,val;
    printf("Enter the size of the Circular Queue\n");
    scanf("%d",&size);
    create(&q,size);
    printf("\nEnter the queue elements\n");
    for(int i=1;i<size;i++)
    {
        scanf("%d",&val);
        enqueue(&q,val);
    }
    display(&q);
    dequeue(&q);
    enqueue(&q,6);
    display(&q);

}