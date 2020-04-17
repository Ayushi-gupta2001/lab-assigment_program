#include<stdio.h>
#define max_size 100
int queue[max_size];
int n,i,ch;
int front=-1;
int rear=-1;
void enqueue()
{
    int x;
    if(rear==n-1)
    {
        printf("queue is full:\n");
    }
    else
    {
            front=0;
            printf("enter the element that u want to insert\n:");
            scanf("%d\n",&x);
           rear=rear+1;
             queue[rear]=x;
        }
}
void dequeue()
{
    if(front>rear||front==-1)
    {
        printf("queue is empty");
    }
    printf("poped element is %d\n",queue[front]);
    front=front+1;
}
void display()
{
    if(front==-1)
    {
        printf("queue is empty");
    }
    for(i=front;i<=rear;i++)
    {
        printf("%d\n",queue[i]);
    }
}
void main()
{
    printf("enter the size of queue");
    scanf("%d",&n);
    do
    {
        printf("enter the choice");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("exit");
            break;
        }
    }
    while(ch!=4);
    {
        printf("BYE");
    }
}
