#include "stdio.h"

void main ()
{
	int arr [20],size;

	printf("\nEnter Number of Elements: ");
	scanf ("%d",&size);

	for (int i=0;i<size;i++)
	{
		printf("Enter Element Number %d: ",i+1);
		scanf ("%d",&arr[i]);

	}
	printf ("\nNegative Elements: ");

	for (int i=0;i<size;i++)
	{
		if (arr[i]<0)
		{
			printf ("%d  ",arr[i]);
		}
	}

	printf ("\n");
}