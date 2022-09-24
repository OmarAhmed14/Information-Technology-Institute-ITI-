#include <stdio.h>

void main ()
{
	int s,arr[10];

	for (int i=0;i<10;i++)
	{
		printf("Enter number %d: ",i+1);
		scanf ("%d",&arr[i]);
	}

	printf ("Enter the value to search: ");
	scanf ("%d",&s);

	for (int i=0;i<10;i++)
	{
		if (arr[i]==s)
			printf ("value is exist at element %d",i+1);;
	}


}