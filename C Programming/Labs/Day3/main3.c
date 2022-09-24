#include <stdio.h>
#include "pow.h"

void main ()
{
	float base; int pow;
	

	printf ("\nEnter base: ");
	scanf ("%f",&base);

	printf ("\nEnter power: ");
	scanf ("%d",&pow);


	printf ("%.2f ^ %d = %.2f\n",base,pow,power(base,pow)); 

}