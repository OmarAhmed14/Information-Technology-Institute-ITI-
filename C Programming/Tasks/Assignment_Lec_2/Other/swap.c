#include <stdio.h>


void main ()
{
	int x , y ;

	printf ("Enter First Number: ");
	scanf ("%d",&x);

	printf ("Enter second Number: ");
	scanf ("%d",&y);



	x = x + y;
	y = x - y;
	x = x - y;

	printf ("--------------After swapping---------------\n");
	printf ("First Number = %d and Second Number = %d\n",x,y);

}