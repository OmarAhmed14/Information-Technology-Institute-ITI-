#include <stdio.h>
#include "root.h"

void main ()
{
	int num1,num2;

	printf("Enter Number that you want to find root: ");
	scanf("%d",&num1);

	printf("Enter the number of root: ");
	scanf("%d",&num2);

	printf ("the root %d of %d = %d",num2,num1,root(num1,num2));

}