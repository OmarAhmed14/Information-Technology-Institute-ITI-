#include <stdio.h>

void main ()
{
	int col,rows,i,j;
	printf ("Enter number of rows: ");
	scanf ("%d",&rows);

	printf ("Enter number of coloums: ");
	scanf ("%d",&col);

	for (i=1;i<=rows;i++)
	{
		for (j=i;j<=col+i-1;j++)
		{
			printf ("%d",j);
		}
		printf("\n");
	}
}