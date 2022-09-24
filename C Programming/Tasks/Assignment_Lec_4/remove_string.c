#include "stdio.h"

void main ()
{
	char str[10];int i=0;

	printf("Enter a string: ");
	fflush (stdin);fflush (stdout);
	gets(str);

	printf ("output String: ");

	while (str[i]!=0)
	{
		if ((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
		{
			printf("%c",str[i]);
		}
		i++;
	}
}

