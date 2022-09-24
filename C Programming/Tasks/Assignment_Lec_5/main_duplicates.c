#include "stdio.h"
#include "duplicates.h"

void main ()
{
	int array[10],size;

	printf("Enter Size of Array: ");
	scanf("%d",&size);


	for (int i=0;i<size;i++)
	{
		printf ("Enter Element Number %d: ",i+1);
		scanf ("%d",&array[i]);
	}

	duplicates (array,&size);

	for (int i = 0; i < size; i++)  
    {  
        printf (" %d \n", array[i]);  
    } 
	
}