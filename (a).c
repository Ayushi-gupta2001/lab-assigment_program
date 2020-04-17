#include<stdio.h>
struct node
{
    int data;
    struct node *link;
};
struct node *head;
struct node *temp;
  int x;
  /*create a singly linked list*/
void createnode()
{
    head=(struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    {
        printf("memorey is not allocated");
    }
    printf("enter the first data\n");
    scanf("%d",&x);
    head->data=x;
    head->link=NULL;
    temp=head;
    for(int i=0;i<=3;i++)
    {
        /*new node created*/
        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        if(newnode==NULL)
        {
            printf("memorey is not allocated");
        }
        printf("enter the other data\n");
        scanf("%d",&x);
        newnode->data=x;
        newnode->link=NULL;
        temp->link=newnode;
        temp=temp->link;
    }
    printf("\nsingly linked succesfully made:\n");
}
void traversal()
{
    temp=head;
    printf("\nsingly linked list is:");
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->link;
    }
}
/*delete the node*/
void delete_at_front()
{
    temp=head;
    head=head->link;
    free(temp);
}
void delete_at_mid()
{
       struct node *temp2=(struct node*)malloc(sizeof(struct node));
    struct node *temp1=(struct node*)malloc(sizeof(struct node));
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
    free(temp);
}
void delete_at_end()
{
    struct node *temp1=(struct node*)malloc(sizeof(struct node));
    temp=head;
    while(temp->link!=NULL)
    {
        temp1=temp;
        temp=temp->link;
    }
    temp1->link=NULL;
    free(temp);
}

void main()
{
    createnode();
    traversal();
    delete_at_front();
    traversal();
    delete_at_mid();
    delete_at_end();
    traversal();

}
