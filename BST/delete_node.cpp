/******************************************************************************


                Delete a Node  in a BST

*******************************************************************************/
#include <stdio.h>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

#include<stdio.h>
#include<stdlib.h>



struct node
{
  int data;
  struct node *left, *right;
};

// Function to return the leftmost node 
struct node *
minValueNode (struct node *node)
{
  struct node *current = node;

  /* loop down to find the leftmost leaf */
  while (current->left != NULL)
    current = current->left;

  return current;
}


node *
delete (node * root, int key)
{

  if (root == NULL)
    {
      return root;
    }

  if (key < root->data)
    root->left = delete (root->left, key);
  else if (key > root->data)
    root->right = delete (root->right, key);
  else
    {

      if (root->left == NULL)
	{
	  struct node *temp = root->right;
	  free (root);
	  return temp;
	}
      else if (root->right == NULL)
	{
	  struct node *temp = root->left;
	  free (root);
	  return temp;
	}

      // node with two children: Get the inorder successor (smallest
      // in the right subtree)
      struct node *temp = minValueNode (root->right);

      // Copy the inorder successor's content to this node
      root->data = temp->data;

      // Delete the inorder successor
      root->right = delete (root->right, temp->data);

    }
  return root;

}


int
main ()
{
  struct node *root = NULL;
  root = insert_key (root, 50);
  insert_key (root, 30);
  insert_key (root, 20);
  insert_key (root, 40);
  insert_key (root, 70);
  insert_key (root, 60);
  insert_key (root, 80);


  root = deleteNode (root, 20);

  // print inoder traversal of the BST
//    inorder(root);

  return 0;
}
