# include <stdio.h>
# include <stdlib.h>

struct node
{
  int data;
  struct node *left,*right,*parent;
};
struct node* initNode(int data)
{
  struct node* node = (struct node*)malloc(20*data);
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  node->parent = NULL;
  return(node);
}

struct node* insert(int data, struct node* root)
{
  // adding a note for the test
}

void printPreorder(struct node* node)
{

}

int main()
{
  struct node *root = initNode(1);
  root->left = initNode(2);
  printf("here\n");
  printf("%d\n",root->data);
  //printf("%d\n",root->left->data);
}
