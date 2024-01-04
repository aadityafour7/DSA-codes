#include<stdio.h>
#include<stdlib.h>
struct stack
{
    char data;
    struct stack *next;
}*top=NULL;

void push(char x)
{
    struct stack *t;
    t=(struct stack *)malloc(sizeof(struct stack));
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
    char x;
    struct stack *t;
    if(top==NULL)
    {
        printf("\nStack Underflow\n");
    }
    else
    {
        t=top;
        top=top->next;
        x=t->data;
       // printf("\nPopped item is %c ",x);
        free(t);
    }
}

int isEmpty()
{
    if(top==NULL)
    return 1;
    return 0;
}

int checkBalancedParenthesis(char *exp)
{
    for(int i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='(')
            push(exp[i]);
        else
        {
            if(top==NULL)
            return 0;
            else
            {
                pop();
            }
        }
    }
    if(top==NULL)
    return 1;
    else
    return 0;
}

int main()
{
    char *exp="((a+b)*(c-d))";
    printf(" %d ",checkBalancedParenthesis(exp));
    return 0;
}