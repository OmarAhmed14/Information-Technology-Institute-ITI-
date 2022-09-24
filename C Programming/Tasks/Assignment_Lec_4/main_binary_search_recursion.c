#include "stdio.h"
#include "binary_search_recursion.h"

void main ()
{
	int array [20],start=0,end,size,value;

	printf("Enter size of array: ");
	scanf ("%d",&size);

	end = size -1;

	for (int i=0;i<=end;i++)
	{
		printf("Enter Element Number %d: ",i+1);
		scanf ("%d",&array[i]);
	}


	printf("Enter value that you Search: ");
	scanf ("%d",&value);


	if (binary_search_recursion (array,start,end,value)>=0)
		printf("Search value: %d at element number: %d \n",array[binary_search_recursion (array,start,end,value)],binary_search_recursion (array,start,end,value)+1);

	else
		printf("Value of %d not exist\n",value);
	
}