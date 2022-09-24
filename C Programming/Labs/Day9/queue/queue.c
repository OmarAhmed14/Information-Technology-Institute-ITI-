#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

node* head=NULL,*tail=NULL;int size=0;

static node* Create_Node (int num)
{
	node* ptr = (node*) malloc (sizeof(node));

	ptr->data =num;
	
	return ptr;
}

void Enqueue (int num)
{
	node* new_node = Create_Node(num);

	if (head==NULL)
		head=new_node;
	else
		tail->next=new_node;

	tail=new_node;
	tail->next=NULL;
	size++;
}

int Dequeue ()
{
	node* temp =head;

	if (head==NULL)
		printf ("No Exist Elements.\n");

	else if (head == tail)
	{
		int x= head->data;
		head = head->next;
		tail =NULL;
		free (temp);
		size--;
		return x;
	}

	else
	{
		int x = head->data;
		head = head->next;
		free (temp);
		size --;
		return x;
	}
}

int IsEmpty ()
{
	if (head==NULL)
		return 1;
	else
		return 0;
}

int Peek ()
{
	if (IsEmpty()==0)
		return head->data;
	else
		exit(1);
}

int Size_queue ()
{
	if (IsEmpty()==0)
		return size;
	else
		return 0;
}

void Print_List ()
{
	node* current =head;

	if (head==NULL)
		printf("No Exist Elements.\n");
	else
	{
		while (current!=NULL)
		{
			printf ("%d\t",current->data);
			current = current->next;
		}
		printf("\n");
	}
}