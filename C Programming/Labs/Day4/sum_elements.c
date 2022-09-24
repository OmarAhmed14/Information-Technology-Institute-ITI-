#include "stdio.h"

void main ()
{
	int arr [15],size,sum=0;

	printf("\nEnter Number of Elements: ");
	scanf ("%d",&size);

	for (int i=0;i<size;i++)
	{
		printf("Enter Element Number %d: ",i+1);
		scanf ("%d",&arr[i]);
		sum+=arr[i];
	}
	printf ("Sum = %d\n",sum);

}
