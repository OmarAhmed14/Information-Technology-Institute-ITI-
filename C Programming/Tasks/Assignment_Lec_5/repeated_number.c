#include "stdio.h"
#include "repeated_number.h"


void repeated_number (int* arr , int size)
{
	int i,j,y,z=0;
	
	for (i=0;i<size;i++)
	{
		for (j=1+i;j<size;j++)
			if (arr[i]==arr[j])   // 5 1 1 1 2
			{
				z++;
				y=i;	
			}
			if (z>0)
				break;
	}

	if (z==0)
		printf("No Number is repeated\n");
	else
		printf("This Number %d is repeated %d times\n",arr[y],z);
}