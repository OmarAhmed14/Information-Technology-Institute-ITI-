#include <stdio.h>
#include "file.h"

void main ()
{
	int num1,num2;
	

	printf ("Enter N: ");
	scanf ("%d",&num1);

	printf ("Enter r: ");
	scanf ("%d",&num2);


	printf ("\nNCR = %d\n",NCR (num1,num2)); 

}