#include "stdio.h"

void main ()
{
	int arr [20],size;

	printf("Enter size of array: ");
	scanf ("%d",&size);

	for (int i=0;i<size;i++)
	{
		printf("Enter Element Number %d: ",i+1);
		scanf ("%d",&arr[i]);
	}

	int max_index = arr[0];

	for (int i=0;i<size;i++)
	{
		for (int j=i+1;j<size;j++)
		{
			if (arr[i]<arr[j])
			{
				max_index=j;
				int temp = arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}

	printf ("Largest Element = %d \nSecond Largest Element = %d\n",arr[0],arr[1]);


}