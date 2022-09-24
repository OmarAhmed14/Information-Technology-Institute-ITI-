#include "stdio.h"
#include "students.h"

void store_information (students *arr,int size)
{
	for (int i=0;i<size;i++)
	{
		printf("Information of student %d:\n",i+1);

		printf ("Enter Name: ");
		fflush(stdin);fflush (stdout);
		gets (arr[i].name);

		printf ("Enter ID: ");
		fflush(stdin);fflush (stdout);
		scanf ("%d",&arr[i].id);

		printf ("Enter grade: ");
		fflush(stdin);fflush (stdout);
		scanf ("%d",&arr[i].grade);

		printf("-------------------------------\n");	
	}
}

void print_information (students *arr,int size)
{
	for (int i=0;i<size;i++)
	{
		printf("Information of student %d:\n",i+1);

		printf ("Name: %s\n",(arr+i)->name);

		printf ("ID: %d\n",(arr+i)->id);

		printf ("Grade: %d\n",(arr+i)->grade);

		printf("-------------------------------\n");	
	}
}


