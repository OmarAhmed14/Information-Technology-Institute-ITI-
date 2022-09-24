#include <stdio.h>
#include "check.h"

void main ()
{
	int num;
	
	printf ("\nEnter Number: ");
	scanf ("%d",&num);

	if (check(num)==1)
		printf ("Number %d is even\n",num);
	else
		printf ("Number %d is odd\n",num);


}