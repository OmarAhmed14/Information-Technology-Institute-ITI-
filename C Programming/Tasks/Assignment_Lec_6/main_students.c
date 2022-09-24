#include "stdio.h"
#include "students.h"

void main ()
{
	students arr[10]; int size;

	printf("Enter Number of students: ");
	scanf ("%d",&size);

	store_information (arr,size);
	printf("-------------------------------\n");
	print_information (arr,size);
}

