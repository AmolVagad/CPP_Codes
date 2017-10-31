
// Example to use simple linked lists 
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
void PrintList(struct Node *n);
void PrintListAll(struct Node *n);
// Creating the node structure
struct Node
{
	int data; // variable to store data of current node
	struct Node *next; // Pointer to point to next node
};



int main()
{
	// Declare 3 nodes
	struct Node* head = NULL;
	struct Node* center = NULL;
	struct Node* tail = NULL;

	//Allocate memory to the nodes 
	head = (struct Node*)malloc(sizeof(struct Node));
	center = (struct Node*)malloc(sizeof(struct Node));
	tail = (struct Node*)malloc(sizeof(struct Node));

	//assign data to first node and pointer to center node

	head->data = 1;
	head->next = center;

	//assign data to second node and pointer to final 
	center->data = 2;
	center->next = tail;

	//assign daata to final node and a NULL pointer 
	tail->data = 3;
	tail->next = NULL;

	//Function call to print the data inside nodes
	PrintList(head);

	//Function call to print data from the entire list
	PrintListAll(head);

	return 0;
 }

// Printing the data inside a single list 

void PrintList(struct Node *n)
{

	int print_data = n->data;
	cout<<"The data inside the Node is ="<<print_data<<endl;
}


// Traversing through entire list and printing data
int count = 0;
void PrintListAll(struct Node *m)
{
	while(m != NULL)
	{
		cout<<"Data at position  "<<count<<"="<<m->data<<endl;
		m = m->next;
		count++;
	}
}
