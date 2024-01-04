#include<stdio.h>
#include<conio.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head;
    struct node *new;
    int choice=1;
    struct node *temp;
    head=NULL;
    while(choice)
    {
        new=(struct node *)malloc(sizeof(struct node));    // memory allocation returns address to new
        printf("Enter data\n");
        scanf("%d",&new->data);
        new->next=NULL;
        if(head==NULL)
        {

            head=new;
            temp=new;
        }
        else
        {
            temp->next=new;
            temp=new;
        }
        printf("Enter choice\n");
        scanf("%d",&choice);
    }
    temp=head;
    printf("Data in linked list is\n");
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    return 0;
}