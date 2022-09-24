#include <stdio.h>

void main ()
{
	int rows;
	printf ("\nEnter Numbrt of rows: ");
	scanf ("%d",&rows);

	for (int i=1; i<=rows;i++)
	{
		for (int j=1;j<=rows;j++)
			if (j==1 || i==rows || i==j)
				printf ("*");
			else 
				printf (" ");
		printf("\n");
	}
}