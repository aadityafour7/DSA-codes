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
    printf("Enter size of stack\n");
    scanf("%d",&st->size);
    st->top=-1;
    st->s=(int *)malloc(st->size*sizeof(int));
}


void display(struct stack st)
{
    for(int i=st.top;i>=0;i--)
    {
        printf(" %d ",st.s[i]);
    }
    printf("\n");
}

void push(struct stack *st,int x)
{
    if(st->top==st->size-1)
    printf("\nStack Overflow\n");
    else
    {
        st->top++;
        st->s[st->top]=x;
    }
}


int isEmpty(struct stack st)
{
    if(st.top==-1)
    return 1;
    else
    return 0;
}


int isFull(struct stack st)
{
    if(st.top==st.size-1)
    return 1;
    else
    return 0;
}

int pop(struct stack *st)
{
    int x=-1;
    if(st->top==-1)
    printf("\nStack Underflow\n");
    else
    {
        x=st->s[st->top--];
    }
    return x;
}
int main()
{
    int choice=1;
    int p;
    struct stack st;
    create(&st);
    while(choice)
    {
        int opt;
        printf("1.Push\n2.Pop\n3.Display\n4.Is empty\n5.Is full\n6.Exit\nEnter choice\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the value to push on the stack\n");
            scanf("%d",&p);
            push(&st,p);
            break;
        case 2:
        printf("\nThe popped element is %d ",pop(&st));
        break;
        case 3:
        printf("\nStack items are \n");
        display(st);
        case 4:
        isEmpty(st);
        break;
        case 5:
        isFull(st);
        break;
        case 6:
        choice=0;
        break;
        }
    }
    return 0;
} 