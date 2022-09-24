#include "stdio.h"
#include "math.h"

void main ()
{
	int a,b,c;

	printf("Enter the value of a: ");
	scanf ("%d",&a);

	printf("Enter the value of b: ");
	scanf ("%d",&b);

	printf("Enter the value of c: ");
	scanf ("%d",&c);

	if (b==0 && a==0)
		printf ("No Solution");

	else if (b*b-a*a*c<0)
		printf ("No Roots");

	else 
	{
		printf ("two Roots\n");
		printf ("1st Root = %.2f\n",-b+sqrt(b*b-4*a*c)/(2*a));
		printf ("2nd Root = %.2f\n",-b-sqrt(b*b-4*a*c)/(2*a));
	}
	
}