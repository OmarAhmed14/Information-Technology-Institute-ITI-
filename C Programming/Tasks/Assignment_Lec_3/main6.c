#include <stdio.h>
#include "reverse.h"

void main ()
{
	int num;

	printf("Enter Number: ");
	scanf("%d",&num);

	printf ("Reversed number of %d = %d",num,reverse(num));

}