#include <stdio.h>
#define max 10
int choice,x,n;
struct node
{
    int data;
    struct node *link;
};
struct node *front=NULL;
struct node *rear=NULL;
struct node *temp;
void push()
{
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&x);
    temp->data=x;
    temp->link=NULL;
    if(front==NULL&&rear==NULL)
    {
        front=rear=temp;
    }
    else
    {
        rear->link=temp;
        rear=temp;
    }
}
void pop()
{
    struct node *temp=front;
    if(front==NULL)
    {
        printf("queue is in underflow condition");
    }
    printf("poped element is %d\n",temp->data);
    front=front->link;
    free(temp);
}
void display()
{
    struct node *temp=front;
    printf("queue is\n");
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->link;
    }
}
void main()
{
    do
    {
        printf("enter the choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("exit");
            }
        }
    }
    while(choice!=4);
    {
        printf("\n BYE");
    }
}
