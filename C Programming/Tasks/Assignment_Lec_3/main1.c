#include "stdio.h"
#include "check_number.h"

void main ()
{
	int num;

	printf ("Enter Number: ");
	scanf ("%d",&num);

	
	if (Prime (num)==1)
	printf ("\n%d is a prime Number\n",num);
	else
	printf ("\n%d is not a prime Number\n",num);

	if (Armstrong (num)==1)
	printf ("\n%d is a Armstrong Number\n",num);
	else
	printf ("\n%d is not a Armstrong Number\n",num);

	if (Perfect (num)==1)
	printf ("\n%d is a Perfect Number\n",num);
	else
	printf ("\n%d is not a Perfect Number\n",num);

}