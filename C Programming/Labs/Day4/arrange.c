#include "stdio.h"

void main ()
{
	int arr1 [10],arr2[10],arr3[20],size1,size2;

	printf("\nEnter Number of Elements of first array: ");
	scanf ("%d",&size1);

	for (int i=0;i<size1;i++)
	{
		printf("Enter Element Number %d: ",i+1);
		scanf ("%d",&arr1[i]);
	}

	printf("\nEnter Number of Elements of second array: ");
	scanf ("%d",&size2);

	for (int i=0;i<size2;i++)
	{
		printf("Enter Element Number %d: ",i+1);
		scanf ("%d",&arr2[i]);
	}


	for (int i=0;i<size1;i++)
	{
		arr3[i]=arr1[i];
	}

	for (int i=0;i<size2;i++)
	{
		arr3[i+size1]=arr2[i];
	}

	int min = arr3[0];

	for (int i=0;i<(size1+size2);i++)
	{
	
	}

	printf ("sorted Array: \n");

	for (int i=0;i<(size1+size2);i++)
	{
		printf("%d\n",arr3[i]);
	}



}