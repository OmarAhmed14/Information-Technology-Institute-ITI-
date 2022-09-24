#include <stdio.h>
#include "max_min.h"

void main ()
{
	int num1,num2,num3,num4;
	

	printf ("\nEnter number 1: ");
	scanf ("%d",&num1);

	printf ("\nEnter number 2: ");
	scanf ("%d",&num2);

	printf ("\nEnter number 3: ");
	scanf ("%d",&num3);


	printf ("\nEnter number 4: ");
	scanf ("%d",&num4);



	printf ("\nMax. Number = %d \n",max (num1,num2,num3,num4)); 
	printf ("Min. Number = %d \n",min (num1,num2,num3,num4)); 

}