#include<stdio.h>
struct node
{
    int data;
    struct node *link;
    struct node *prev;
};
struct node *temp;
struct node *head;
void createnode()
{
    int data;
    struct node *temp;
    struct node *head=(struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    {
        printf("memorey is not allocated");
    }
    printf("enter the data");
    scanf("%d",&data);
    head->data=data;
    head->link=NULL;
    head->prev=NULL;
    temp=head;
    for(int i=2;i<=4;i++)
    {
        struct node *new=(struct node*)malloc(sizeof(struct node));
        if(new==NULL)
        {
            printf("memorey is not allocated");
        }
        printf("enter the new data");
        scanf("%d",&data);
        new->data=data;
        new->link=NULL;
        new->prev=temp;
        temp->link=new;
        temp=temp->link;
    }
    printf("\n doubley linked list is successfully made:");
}
void traversal()
{
    temp=head;
    for(int k=0;k<4;k++)
    {
        printf("%d",temp->data);
        temp=temp->link;
    }
}
void delete_at_front()
{
    temp=head;
    head=head->link;
    free(temp);
}
delete_at_mid()
{
    struct node *temp1;
    struct node *temp2;
    int key;
    printf("\n enter the key");
    scanf("%d",&key);
    temp=head;
    while(temp->data!=key)
    {
        temp1=temp;
        temp=temp->link;
        temp2=temp;
        temp2=temp2->link;
    }
    temp1->link=temp2;
    temp2->prev=temp1;
    free(temp);
    printf("\n doubley linked list after deletion");
}
void main()
{
    createnode();
    traversal();
    delete_at_front();
    delete_at_mid();
    traversal();
}
