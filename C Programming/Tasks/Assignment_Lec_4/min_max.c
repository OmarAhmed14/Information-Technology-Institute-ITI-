#include "stdio.h"

void main ()
{
	int arr [10];

	for (int i=0;i<10;i++)
	{
		printf("Enter Element Number %d: ",i+1);
		scanf ("%d",&arr[i]);
	}

	int min =arr[0];
	int max=arr[0];

	for (int i=0;i<9;i++)
	{
		if (arr[i+1]<min)
		{
			min =arr[i+1];
		}
		if (arr[i+1]>max)
		{
			max =arr[i+1];
		}
	}
	printf ("\nMax. Value = %d and Min. Value = %d\n",max,min);
}