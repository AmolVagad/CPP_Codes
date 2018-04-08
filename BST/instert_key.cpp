/******************************************************************************


                Insert a key in a BST

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


node* insert_key(node* root, int key )
{
    
    if(root == NULL)
    {
        node *temp =  (struct node *)malloc(sizeof(struct node));
        temp->data = key;
        temp->left = temp->right = NULL;
        root = temp;
    }
    
    if(key < root->data)
        root->left = insert_key(root->left, key);
    else if(key > root->data)
        root->right = insert_key(root->right,key);
        
    return root; 
    
}





int main()
{
    /* Let us create following BST
              50
           /     \
          30      70
         /  \    /  \
       20   40  60   80 */
    struct node *root = NULL;
    root = insert_key(root, 50);
    insert_key(root, 30);
    insert_key(root, 20);
    insert_key(root, 40);
    insert_key(root, 70);
    insert_key(root, 60);
    insert_key(root, 80);
  
    // print inoder traversal of the BST
//    inorder(root);
  
    return 0;
}