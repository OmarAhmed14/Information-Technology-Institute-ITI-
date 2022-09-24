#include "stdio.h"

void main ()
{
	char str[100];int vowels=0,con=0,space=0,digits=0;

	printf("Enter a string: ");
	fflush (stdin);fflush (stdout);
	gets(str);

	for (int i=0;str[i]!=0;i++)
	{
		if (str [i]=='a' || str [i]=='A' || str [i]=='e' || str [i]=='E' || str [i]=='o' || str [i]=='O' || str [i]=='u' || str [i]=='U' || str [i]=='I' || str [i]=='i' && str[i] !=' ' )
			vowels++;

		else if (str[i] == ' ')
			space ++;

		else if (str[i]>='0' && str[i]<='9')
			digits++;

		else
			con++;
	}
	

	printf ("vowels = %d\nconsonants = %d\nspaces = %d\nDigits = %d\n",vowels,con,space,digits);

}