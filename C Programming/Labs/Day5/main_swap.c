#include "stdio.h"
#include "swap.h"

void main ()
{
	int x ,y;

	printf("Enter First value: ");
	scanf ("%d",&x);

	printf("Enter second value: ");
	scanf ("%d",&y);

	swap (&x,&y);

	printf("---------------------------\n");

	printf("After Swapping: \n");

	printf("First value: %d\n",x);
	

	printf("Second value: %d\n",y);
	


}