#include "stdio.h"
#include <string.h>
void main ()
{
	char str1[10],str2[10];

	printf("Enter a first string: ");
	fflush (stdin);fflush (stdout);
	gets(str1);

	printf("Enter a second string: ");
	fflush (stdin);fflush (stdout);
	gets(str2);


	printf ("the String: %s",strcat(strcat(str1," "),str2));  
	
} 