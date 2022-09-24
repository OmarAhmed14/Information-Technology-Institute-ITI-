#include <stdio.h>

void main ()
{
	int num,first,last;

	printf ("\nEnter number to sum first and last digits: ");
	scanf ("%d",&num);

	first = num%10;

	while (num!=0)
	{
		last = num%10;
		num /=10 ;  
	}
	printf ("sum of first and last digits = %d\n",first+last);
}