#include "stdio.h"

void main ()
{
	char arr [50],c ; int i=0,j=0;

	printf("Enter a string: ");
	fflush (stdin);fflush (stdout);
	scanf("%s",arr);

	printf("Enter a character to find frequency: ");
	fflush (stdin);fflush (stdout);
	scanf("%c",&c);

	while (arr[i]!=0)
	{
		if (arr[i]==c)
			j++;
		i++;
	}
	printf ("frequency of %c = %d\n",c,j);
}