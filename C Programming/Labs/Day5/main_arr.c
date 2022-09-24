#include "stdio.h"
#include "arr.h"

void main ()
{
	int array[10],size;

	printf ("Enter size of Array: ");
	scanf("%d",&size);

	for (int i=0;i<size;i++)
	{
		printf ("Enter Element Number %d: ",i+1);
		scanf ("%d",&array[i]);

	}

	printf ("sum = %d",arr(array,size));
	


}