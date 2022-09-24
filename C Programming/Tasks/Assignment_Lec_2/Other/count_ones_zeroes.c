#include <stdio.h>

void main ()
{
	int num; char z=0;

	printf("Enter number: ");
	scanf("%d",&num);

	for (char i=0;i<32;i++)
		switch ((num >> i) & 1)
		{
			case 1:
			z++;
			break;

			case 0:
			break;
		}


	printf ("number of one bit = %d\n",z);
	printf ("number of zeroe bit = %d\n",32-z);
}