#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int *s;
};

void create(struct stack *st)
{
    printf("Enter the size of the stack\n");
    scanf("%d",&st->size);
    st->top=-1;
    st->s=(int *)malloc(st->size*sizeof(int));
}

void push(struct stack *st)
{
    if(st->top==st->size-1)
    {
        printf("\nStack Overflow\n");
    }
    else
    {
        int x;
        printf("Enter the data\n");
        scanf("%d",&x);
        st->top++;
        st->s[st->top]=x;
    }
}


void pop(struct stack *st)
{
    int x;
    if(st->top==-1)
    {
        printf("\nStack Underflow\n");
    }
    else
    {
        x=st->s[st->top--];
    }
    printf("\nPopped data is %d ",x);
    printf("\n");
}

void display(struct stack *st)
{
    for(int i=st->top;i>=0;i--)
    {
        printf(" %d ",st->s[i]);
    }
    printf("\n");
}


void checkStack(struct stack *st)
{
    if(st->top==st->size-1)
    {
        printf("\nStack Full\n");
    }
    else if(st->top==-1)
    {
        printf("\nStack Empty\n");
    }
    else
    {
        printf("\nStack neither empty nor full\n");
    }
}

int main()
{
    struct stack st;
    create(&st);
    int choice=1;
    while(choice)
    {
        printf("\n1.Push\n2.Pop\n3.Display\n4.Check Stack\n5.Exit\nEnter your choice\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            push(&st);    
            break;
        case 2:
            pop(&st);
            break;
        case 3:
            display(&st);
            break;
        case 4:
            checkStack(&st);
            break;    
        case 5:
            choice=0;
            break;
        }
    }
    return 0;
}