#include "stdio.h"
#include "binary_search.h"

void main ()
{
	int array [20],size,value;

	printf("Enter Size of array: ");
	scanf ("%d",&size);

	for (int i=0;i<size;i++)
	{
		printf("Enter Element Number %d: ",i+1);
		scanf ("%d",&array[i]);
	}


	printf("Enter value that you Search: ");
	scanf ("%d",&value);


	if (binary_search (array,size,value)>=0)
		printf("Search value: %d at element number: %d \n",array[binary_search (array,size,value)],binary_search (array,size,value)+1);

	else
		printf("Value of %d not exist\n",value);
	
}