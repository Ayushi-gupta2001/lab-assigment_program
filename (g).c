#include <stdio.h>
struct node
{
    int data;
   struct node *left;
   struct node *right;
};struct node *t;
struct node *createnode()
{
    int x;
   struct node *newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data for the nodes(-1 for no data)");
    scanf("%d", &x);

   if(x==-1)
     {
     printf("\n we don't want to inserted data\n");
     return NULL;
      }
      newnode->data=x;
      printf("left child data rooted at %d \n",x);
      newnode->left=createnode();
      printf("Enter the right child data rooted at %d\n",x);
      newnode->right=createnode();
}
void traverse(struct node *t)
{

    if(t!=NULL)
    {
    printf("root data is %d\n",t->data);
    traverse(t->left);
    traverse(t->right);
    }
    else
    {
        return NULL;
    }
}
int count_leafnode(struct node *t)
{
    if(t==NULL)
    {
        return 0;
    }
    else
    {
        if(t->left==NULL&&t->right==NULL)
        {
            return 1;
        }
        else
        {
            return ((count_leafnode(t->left))+(count_leafnode(t->right)));
        }
    }
}
int count_nonleafnode(struct node *t)
{
    if(t==NULL)
    {
        return 0;
    }
    else
    {
        if(t->left==NULL&&t->right==NULL)
        {
            return 0;
        }
        else
        {
            return (1+(count_nonleafnode(t->left))+(count_nonleafnode(t->right)));
        }
    }
}
void main()
{
struct node *root=createnode();
traverse(root);
printf("\nLeaf node in the tree is %d",count_leafnode(root));
printf("\n Nonleaf node in tree is %d",count_nonleafnode(root));
}
