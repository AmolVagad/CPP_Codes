/******************************************************************************

Find the minimum value in a BST

*******************************************************************************/
#include <stdio.h>


struct node 
{
    int data;
    struct node* left;
    struct node* right;
};


int get_min(node* root)
{
    if(root == NULL)
        return NULL;
    node* temp = root;
    
    while(temp->left != NULL)
    {
        temp = temp->left;
    }
    
    return temp->data;
        
}



int main()
{
  struct node* root = NULL;
  root = insert(root, 4);
  insert(root, 2);
  insert(root, 1);
  insert(root, 3);
  insert(root, 6);
  insert(root, 5);  
 
  printf("\n Minimum value in BST is %d", get_min(root));
  getchar();
  return 0;  
}


