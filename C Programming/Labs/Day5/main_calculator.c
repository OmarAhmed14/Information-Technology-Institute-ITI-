#include "stdio.h"
#include "calculator.h"

void main ()
{
	int x,y,sum ,multiply,division,substract;

	printf("Enter First operand: ");
	scanf ("%d",&x);

	printf("Enter second operand: ");
	scanf ("%d",&y);

	calculator (x,y,&sum,&multiply,&division,&substract);

	printf("%d + %d: %d\n",x,y,sum);

	printf("%d * %d: %d\n",x,y,multiply);

	printf("%d / %d: %d\n",x,y,division);

	printf("%d - %d: %d\n",x,y,substract);

	
	


}