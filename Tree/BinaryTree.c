// Tree using linked list

#include<stdio.h>
#include<stdlib.h>
struct node 
{
    struct node* lchild;
    struct node* rchild;
    int data;
};

void addLeft(struct node* p)
{
    struct node* t;
    struct node* st;
    t=(struct node *)malloc(sizeof(struct node));
    printf("Enter Left child data\n");
    scanf("%d",&t->data);
    p->lchild=t;
    t->lchild=t->rchild=NULL;
    p=t;
}


int main()
{
    struct node* p;
    p=(struct node *)malloc(sizeof(struct node));
    printf("Enter Root data\n");
    scanf("%d",&p->data);
    p->lchild=p->rchild=NULL;
    addLeft(p);
    addLeft(p);
    addLeft(p);
    return 0;
}