#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*new=NULL;
void create(int arr[],int n)
{
    struct node *t,*last;
    new=(struct node *)malloc(sizeof(struct node));
    new->data=arr[0];
    new->next=NULL;
    last=new;
    for(int i=1;i<n;i++)
    {
        t=(struct node *)malloc(sizeof(struct node));
        t->data=arr[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void search(struct node *p)
{
    int key;
    printf("\nEnter search element\n");
    scanf("%d",&key);
    while(p!=NULL)
    {
        if(p->data==key)
        {
            break;
        }
        else
        {
            p=p->next;
        }
    }
    if(p==NULL)
    {
        printf("Key not found\n");
    }
    else
    {
        printf("Key found\n");
    }
}
void display(struct node *p)
{
    printf("List data\n");
    while (p!=NULL)
    {
        printf(" %d ",p->data);
        p=p->next;
    }
    
}
int main()
{
    int n;
    printf("Enter the number of items in list\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    create(arr,n);
    display(new);
    search(new);
    return 0;
}