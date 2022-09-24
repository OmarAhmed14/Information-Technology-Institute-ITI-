#include "stdio.h"

void main ()
{
	int arr1 [20],arr2[10];


	for (int i=0;i<10;i++)
	{
		printf("Enter Element Number %d: ",i+1);
		scanf ("%d",&arr1[i]);
	}

	for (int i=0;i<10;i++)
	{
		printf("Enter Element Number %d: ",i+1);
		scanf ("%d",&arr2[i]);
	}

	printf("Arranged Array:\n");


	for (int k =0 ; k < 10 ; k++)
	{
		if (arr1[k] < arr2[k])
		{
			printf("%d ",arr1[k]);
			printf("%d ",arr2[k]);
		}
		else{
			printf("%d ",arr2[k]);
			printf("%d ",arr1[k]);
		}
	}

	
}