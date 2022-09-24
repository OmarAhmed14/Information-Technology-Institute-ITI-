#include <stdio.h>

void main ()
{
	int num,x;

	printf("Enter number: ");
	scanf("%d",&num);

	printf("Converted binary: ");

	for (int i=31;i>=0;i--)
	{
		x = num>>i;
		if (x & 1)
			printf ("1");
		else 
			printf ("0");
	}
}