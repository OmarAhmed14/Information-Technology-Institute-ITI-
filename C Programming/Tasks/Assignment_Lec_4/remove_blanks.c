#include "stdio.h"

void main ()
{
	char str[100],str2[100];int i=0,j=0;

	printf("Enter some text: ");
	fflush (stdin);fflush (stdout);
	gets(str);

	while (str[i]!=0)     // omar  ahmed
	{
		if (!(str[i]==' ' && str[i+1]==' '))
		{
			str2[j]=str[i];
			j++;
		}
		i++;
	}
	str2[j]=0;

	printf ("After Removing blanks String is: %s",str2);  
	
} 