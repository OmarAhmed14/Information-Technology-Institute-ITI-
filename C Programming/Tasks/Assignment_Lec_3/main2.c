#include "stdio.h"
#include "sqrt.h"

void main ()
{
	int num;

	printf ("Enter Number: ");
	scanf ("%d",&num);

	if (squrt (num)==0)
		printf ("No root for this number\n");
	else
		printf ("Square root of %d = %d\n",num,squrt(num));
	

}