#include "stdio.h"
#include "bubble_sort.h"

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

	bubble_sort (array,size);

	for (int i=0;i<size;i++)
	{
		printf("Element Number %d: %d\n",i+1,array[i]);
	}
}