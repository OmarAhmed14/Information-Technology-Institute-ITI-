#include "stdio.h"

void main ()
{
	int arr [20],size,element,pos;

	printf("Enter size of array: ");
	scanf ("%d",&size);

	for (int i=0;i<size;i++)
	{
		printf("Enter Element Number %d: ",i+1);
		scanf ("%d",&arr[i]);
	}

	printf ("before Insertion:\n");

	for (int i=0;i<size;i++)
	{
		printf("Enter Element Number %d = %d \n",i+1,arr[i]);
	}

	printf("Enter Element to insert: ");
	scanf("%d",&element);

	printf("Enter the Element position: ");
	scanf("%d",&pos);

	pos--;

	for (int i=size;i>=pos;i--)
	{
		arr[i]=arr[i-1];
		if (pos==i)
			arr[i]=element;
	}

	printf ("After Insertion:\n");

	for (int i=0;i<=size;i++)
	{
		printf("Enter Element Number %d = %d \n",i+1,arr[i]);
	}




}