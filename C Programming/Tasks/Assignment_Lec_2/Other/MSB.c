#include <stdio.h>

void main ()
{
	int num,x;

	printf("Enter any number: ");
	scanf("%d",&num);


	if (num>>31 & 1)
		printf ("MSP of %d is set (1)",num);
	else
		printf ("MSP of %d is zero",num);
}