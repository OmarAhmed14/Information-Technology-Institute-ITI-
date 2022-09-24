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


	/* sorting arr3 */


	for (int i=0;i<(size1+size2)-1;i++)
	{
		for (int j=0;j<(size1+size2)-i-1;j++)
		{
			if (arr3[j]>arr3[j+1])
			{
				int temp=arr3[j];
				arr3[j]=arr3[j+1];
				arr3[j+1]=temp;
			}

		}

	}

		/* print arr3 */

	printf ("sorted Array: \n");

	for (int i=0;i<(size1+size2);i++)
	{
		printf("%d\n",arr3[i]);
	}



}