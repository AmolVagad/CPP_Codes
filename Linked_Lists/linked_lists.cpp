
// Example to use simple linked lists 
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
void PrintList(struct Node *n);
void PrintListAll(struct Node *n);
void PushNewHead(struct Node** head_ref, int new_data);
void PushNewTail(struct Node** tail_ref, int new_data);

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
	
	//Function call to add a new head
	PushNewHead(&head, 0);

	//Print new list after the addition 
	cout<<"The new list after addition of new head"<<endl;
	PrintListAll(head);


	//Function call to add new tail
	PushNewTail(&head, 6);

	//Print new list after the addition 
        cout<<"The new list after addition of new tail"<<endl;
        PrintListAll(center);

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
	count = 0;
}




// Pushing a new node to make it the new head 
void PushNewHead(struct Node** head_ref, int new_data)
{

	//Allocate memory to new node
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

	//Insert data
	new_node->data = new_data;
	//Point to the head

	new_node->next = (*head_ref);

	//Move head to new node
	*head_ref = new_node;
}


// Push a new node to make it the new tail 


void PushNewTail(struct Node** tail_ref, int new_data)
{

        //Allocate memory to new node
        struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

	struct Node *last = *tail_ref;
        //Insert data
        new_node->data = new_data;
        //Point to NULL 

        new_node->next = NULL;

        //Traverse till last node
        while(last->next != NULL)
	{
		last = last->next;
	}
return;

}

