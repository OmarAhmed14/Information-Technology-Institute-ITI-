#include <stdio.h>
#include "fact.h"

void main ()
{
	int num;
	

	printf ("\nEnter Number: ");
	scanf ("%d",&num);

	printf ("Factorial of %d is %d\n",num,fact(num)); 

}