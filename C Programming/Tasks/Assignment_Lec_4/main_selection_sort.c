#include "stdio.h"
#include "selection_sort.h"

void main ()
{
	int array [20],size;

	printf("Enter Size of array: ");
	scanf ("%d",&size);

	for (int i=0;i<size;i++)
	{
		printf("Enter Element Number %d: ",i+1);
		scanf ("%d",&array[i]);
	}

	selection_sort (array,size);

	printf("\nSorted Array: \n");

	for (int i=0;i<size;i++)
	{
		printf("Element Number %d = %d \n",i+1,array[i]);
	}
	
	
}