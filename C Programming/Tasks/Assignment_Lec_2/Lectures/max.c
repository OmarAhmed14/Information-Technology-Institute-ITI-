#include <stdio.h>

void main ()
{
	int num1,num2,num3;

	printf("\nEnter number 1: ");
	scanf ("%d",&num1);

	printf("Enter number 2: ");
	scanf ("%d",&num2);

	printf("Enter number 3: ");
	scanf ("%d",&num3);


	
	if (num2>num3 && num2>num1)
	{
		printf ("Max. number is %d",num2);
	}
	else if (num3>num2 && num3> num1)
	{
		printf ("Max. number is %d",num3);
	}
	else
	{
		printf ("Max. number is %d",num1);
	}
}

