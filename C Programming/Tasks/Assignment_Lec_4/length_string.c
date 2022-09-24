#include "stdio.h"

void main ()
{
	char str[10];int i=0,j=0;

	printf("Enter a string: ");
	fflush (stdin);fflush (stdout);
	gets(str);

	while (str[i]!=0)
	{
		j++;
		i++;
	}

	printf ("Length of String: %d",j);  
	
} 