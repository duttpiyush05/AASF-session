#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *left;
  struct node *right;
};

struct node* createNode(int data)
{
  struct node *new = (struct node *)malloc(sizeof(struct node));
  new->data=data;
  new->left=NULL;
  new->right=NULL;
  return new;
}

void inorderder(struct node *root)
{
  if(root==NULL)
  {
    return ;
  }
  else
  {
    inorderder(root->left);
    printf("%d ", root->data);
    inorderder(root->right);
  }
}

int main ()
{
struct node * root = createNode(5);
root->left=createNode(3);
root->right=createNode(8);
root->left->left=createNode(2);
root->left->right=createNode(4);
inorderder(root);
}