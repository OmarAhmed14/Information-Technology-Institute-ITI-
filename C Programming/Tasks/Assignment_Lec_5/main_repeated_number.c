#include "stdio.h"
#include "repeated_number.h"


void main (void)
{
	int arr[10],size;

	printf("Enter Size of Array: ");
	scanf("%d",&size);

	for (int i=0;i<size;i++)
	{
		printf ("Enter Element Number %d: ",i+1);
		scanf ("%d",&arr[i]);
	}

	repeated_number (arr,size);
}