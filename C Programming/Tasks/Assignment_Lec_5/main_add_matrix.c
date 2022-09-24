#include "stdio.h"
#include "add_matrix.h"


void main ()
{
	int arr1[10],size,arr2[10],*ptr;

	printf("Enter Size of two Arraies: ");
	scanf("%d",&size);

	printf("Enter Elements of Array 1: \n");

	for (int i=0;i<size;i++)
	{
		printf ("Enter Element Number %d: ",i+1);
		scanf ("%d",&arr1[i]);
	}

	printf("Enter Elements of Array 2: \n");

	for (int i=0;i<size;i++)
	{
		printf ("Enter Element Number %d: ",i+1);
		scanf ("%d",&arr2[i]);
	}

	ptr = add_matrix (arr1,arr2,size);

	printf("-------------------\n");
	printf ("sum of two matrices:\n");


	for (int i=0;i<size;i++)
	{
		printf ("Element Number %d: %d\n",i+1,ptr[i]);
		
	}
}

