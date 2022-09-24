#include <stdio.h>

void main ()
{
	char num;
	printf ("\nEnter a number: ");
	scanf ("%d",&num);

	switch (num%2==0)
	{
		case 1:
		printf ("the number is even\n");
		break;
		
		case 0:
		printf ("the number is odd\n");
		break;
	}
}