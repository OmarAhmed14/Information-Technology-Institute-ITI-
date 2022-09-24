#include <stdio.h>
#include "stdlib.h"
#include "Double_Linked_list.h"

node* head=NULL,*tail=NULL;

static node* Create_Node (int num)
{
	node* ptr = (node*) malloc (sizeof(node));

	ptr->data =num;
	
	return ptr;
}

void Insert_Last (int num)
{
	node* new_node = Create_Node(num);
	node* temp =NULL;

	if (head==NULL){
		head=new_node;
		tail=new_node;
		head->prev=NULL;
	    tail->next=NULL;}
	else
	{
		tail->next=new_node;
		temp=tail;
		tail=new_node;
		tail->prev=temp; 
		tail->next=NULL;
	}
}

void Insert_First (int num)
{
	node* new_node = Create_Node(num);

	if (head==NULL)
	{
		head=new_node;
		tail=new_node;
		head->prev=NULL;
		tail->next=NULL;
	}
	else
	{
		new_node->next=head;
		head->prev=new_node;
		head=new_node;
		head->prev=NULL;

	}
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

	/* another method to print */

// void Print_List ()
// {
// 	node* current =tail;

// 	if (head==NULL)
// 		printf("No Exist Elements.\n");
// 	else
// 	{
// 		while (current!=NULL)
// 		{
// 			printf ("%d\t",current->data);
// 			current = current->prev;
// 		}
// 		printf("\n");
// 	}
// }

int Find_Element (int num)
{
	node* current = head;
	int i=1;

	if (head == NULL)
		printf("No Exist Elements.\n");

	else
	{
		while (current!=NULL)
		{
			if (num == current->data)
			{
				printf("Element is Exist.\n");
				return i;
			}
			else
			{
				current = current->next;
			}

			i++;
		}

		printf ("Not exist");
		return 0;
	}
}

void Delete_First ()
{
	node* temp =head;

	if (head==NULL)
		printf ("No Exist Elements.\n");

	else if (head == tail)
	{
		head =NULL;
		tail =NULL;
		free (temp);
	}
	else
	{
		head = head->next;
		head->prev =NULL;
		free (temp);
	}
}

void Delete_Last ()
{
	node* curr =tail;
	if (head==NULL)
		printf ("No Exist Elements.\n");

	else if (head == tail)
	{
		head = NULL;
		tail =NULL;
		free (head);
	}

	else
	{
		tail =tail->prev;
		tail->next=NULL;
		free (curr);
	}
}

void Delete_Element (int num)
{
	node *curr=head;

	if (head == NULL)
		printf ("No Exist Elements.\n");

	else if (head->data == num)
		Delete_First();

	else if (tail->data == num)
		Delete_Last();

	else
	{
		while (curr->data !=num  && curr->next !=NULL)
		{
			curr=curr->next;
		}

		if (curr->next !=NULL)
		{
			curr->prev->next= curr->next;
			curr->next->prev= curr->prev;
			free (curr);
		}
		else
			printf ("This Element is not exist to be deleted.\n");
	}
}