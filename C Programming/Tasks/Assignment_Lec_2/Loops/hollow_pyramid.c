#include <stdio.h>

void main ()
{
	int i,j,z;
	int rows;
	printf ("\nEnter Numbrt of rows: ");
	scanf ("%d",&rows);

	for (i=1;i<=rows;i++)
	{
		/* spaces */
		for (j=i;j<=rows;j++)
		{
			printf(" ");
			
	    }
	    /* symbols */
		for (z=1;z<=(2*i)-1;z++)
		{
			if (i==rows || z==1 || z==(2*i-1))
			printf("*");
		else 
			printf(" ");
			
	    }
		printf ("\n");
	}
}