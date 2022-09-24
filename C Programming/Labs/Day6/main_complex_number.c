#include "stdio.h"

struct complex
{
	int r;
	int m;
};

void main ()
{
	struct complex num1,num2;
	printf("Enter First complex number:\n");

	printf ("Enter Real number: ");
	scanf ("%d",&num1.r);

	printf ("Enter imaginary number: ");
	scanf ("%d",&num1.m);

	printf ("---------------------\n");

	printf("Enter second complex number:\n");

	printf ("Enter Real number: ");
	scanf ("%d",&num2.r);

	printf ("Enter imaginary number: ");
	scanf ("%d",&num2.m);

	printf ("---------------------\n");

	printf ("Result complex Number = %d + %di\n",num1.r+num2.r,num1.m+num2.m);
} 