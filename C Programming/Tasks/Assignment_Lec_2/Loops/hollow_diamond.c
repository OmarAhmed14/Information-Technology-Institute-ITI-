#include <stdio.h>

void main ()
{
	int rows,i,j;
	printf ("\nEnter Numbrt of rows: ");
	scanf ("%d",&rows);

	for ( i=1;i<=rows;i++)
	{	
		for ( j=i;j<=rows;j++)
		{
			printf ("*");
		}

		for ( j=1;j<=(2*i-2);j++)
		{
			printf (" ");
		}
		for ( j=i;j<=rows;j++)
		{
			printf ("*");
		}
		printf ("\n");
	}


		for (i=1;i<=rows;i++)	
			{
				for (j=1;j<=i;j++)
				{
					printf ("*");
				}

				for (j=(2*i-2);j<(2*rows-2);j++)
				{
				printf (" ");
				}
				for (j=1;j<=i;j++)
				printf ("*");
			
			printf("\n");
			}
	

		
}