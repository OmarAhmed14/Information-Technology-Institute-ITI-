#include "stdio.h"

void main ()
{
	int arr [20],size,even=0;

	printf("Enter size of array: ");
	scanf ("%d",&size);

	for (int i=0;i<size;i++)
	{
		printf("Enter Element Number %d: ",i+1);
		scanf ("%d",&arr[i]);
	}

	for (int i=0;i<size;i++)
	{
		if (arr[i]%2==0)
			even++;
	}

	printf ("Number of even Element = %d \nNumber of odd Element = %d\n",even,size-even);


}