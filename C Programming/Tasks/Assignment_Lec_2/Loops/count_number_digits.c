#include <stdio.h>

void main ()
{
	int num,i=0;

	printf ("\nEnter the number: ");
	scanf ("%d",&num);

	while (num!=0)
	{
		int x =num%10;
		num/=10;
		i++;
	}
	printf ("Number of digits = %d\n",i);

}