#include <stdio.h>
typedef struct node
{
    char data;
   struct node *left;
   struct node *right;
};struct node *t;
struct node *createnode()
{
    char x;
   struct node *newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data for the nodes(-1 for no data)");
    scanf("%c",&x);

   if(x==-1)
     {
     printf("\n we don't want to inserted data\n");
     return NULL;
      }
      newnode->data=x;
      printf("left child data rooted at %c \n",x);
      newnode->left=createnode();
      printf("Enter the right child data rooted at %c\n",x);
      newnode->right=createnode();
}
void inorder(struct node *t)
{
    if(t==NULL)
    {
        return ;
    }
    inorder(t->left);
    printf("root data is %c\n",t->data);
    inorder(t->right);
}
void preorder(struct node *t)
{
    if(t==NULL)
    {
        return ;
    }
    printf("root data is %c\n",t->data);
    preorder(t->left);
    preorder(t->right);
}
void postorder(struct node *t)
{
    if(t==NULL)
    {
        return ;
    }
    postorder(t->left);
    postorder(t->right);
    printf("root data is %c\n",t->data);
}
void main()
{
    struct node *root=createnode();
    printf("INORDER TRAVERSAL IS:\n");
    inorder(root);
    printf("PREORDER TRAVERSAL IS:\n");
    preorder(root);
    printf("POSTORDER TRAVERSAL IS:\n");
    postorder(root);
}

