#include <stdio.h>

void main ()
{
	int i,j,z,h;

	printf ("Enter Height of Pyramid: ");
	scanf ("%d",&h);

	
	for (i=1;i<=h;i++)
	{
		/* spaces */
		for (j=0;j<h-i;j++)
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