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



void display(struct node *p)
{
    while(p!=NULL)
    {
        printf(" %d ",p->data);
        p=p->next;
    }
}



void sortedList(struct node *e)
{
    int m=0;
    while (e!=NULL)
    {
        if(m>e->data)
        {
            break;
        }
        else
        {
            m=e->data;
            e=e->next;
        }
    }
    if(e==NULL) 
    printf("\nList is sorted\n");
    else
    printf("\nList is not sorted\n");

}
int main()
{
    int n;
    printf("Enter the number of elements in list\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    create(arr,n);
    display(new);
    sortedList(new);
    return 0;
}