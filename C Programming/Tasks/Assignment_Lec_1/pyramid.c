#include <stdio.h>

void main ()
{
	int i,j,z;

	
	for (i=1;i<=6;i++)
	{
		/* spaces */
		for (j=0;j<=5-i;j++)
		{
			printf(" ");
			
	    }
	    /* symbols */
		for (z=1;z<=(2*i)-1;z++)
		{
			printf("*");
			
	    }
		printf ("\n");
	}
	

}