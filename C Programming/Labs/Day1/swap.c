#include <stdio.h>


void main ()
{
	int x=3 , y=5 , temp;

	/* 1st method */

	temp =x;
	x=y;
	y=temp;
	printf ("x = %d and y = %d\n",x,y);

	/* 2nd method */

	x = x + y;
	y = x - y;
	x = x - y;
	printf ("x = %d and y = %d\n",x,y);

	/* 3rd method */

	x = x ^ y;      
	y = x ^ y;
	x = x ^ y;
	printf ("x = %d and y = %d\n",x,y);


}