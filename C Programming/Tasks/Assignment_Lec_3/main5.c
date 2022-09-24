#include <stdio.h>
#include "calculator.h"

void main ()
{
	 int id ;long a,b;
	

	printf ("\nEnter ID: ");
	scanf ("%d",&id);
	calc (&id ,a , b);

	if (id ==7 || id == 10 || id ==11)
	{
		if (id != 0) {
		
			printf ("\nEnter only one operand: ");
			scanf ("%ld",&a);
			printf ("result = %ld",calc (&id ,a , b)); 
		}
		 else
		 	printf ("wrong ID");
	}
	else 
	 {
	 	if (id != 0)
	  	 {
			printf ("\nEnter two operands: ");
	 		scanf ("%ld",&a);
			scanf ("%ld",&b);
			printf ("result = %ld",calc (&id ,a , b));
		} 
	
	 	else
	 	 	printf ("wrong ID");
	 }

	

}