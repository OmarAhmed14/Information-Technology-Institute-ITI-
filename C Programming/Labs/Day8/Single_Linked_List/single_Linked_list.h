#ifndef SINGLE_LINKED_LIST_H
#define SINGLE_LINKED_LIST_H


typedef struct N
{
	int data;
	struct N * next;
}node;

static node* Create_Node (int num);

void Insert_Last (int num);

void Insert_First (int num);

void Print_List ();

int Find_Element (int num);

void Delete_First ();

void Delete_Last ();

void Delete_Element (int num);

#endif