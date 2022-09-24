#include <stdio.h>

void main ()
{
	char num;
	printf ("\nEnter a number: ");
	scanf ("%d",&num);
	
	/* if condittion */
/*
	if (num>0)
		printf ("\nthe number is positive\n");
	else if (num<0)
		printf ("\nthe number is negative\n");
	else 
		printf ("\nthe number is zero\n");
*/	
	
	
	/* switch case */
	switch (num>0)
	{
		case 1:
		printf ("\nthe number is positive\n");
		break;
		
		case 0:
		if (num<0)
		printf ("\nthe number is negative\n");
		else
		printf ("\nthe number is zero\n");
		break;
	}
}