#include <stdio.h>

void main ()
{
	int num,x,n=0;

	printf("\nEnter any number to print in words: ");
	scanf ("%d",&num);  

	while (num!=0)
	{
		n = (num %10) + (n*10); 
		num/=10;
	}

	while (n !=0)
	{
		x= n%10;
		switch (x)
		{
			case 0:
			printf (" ZERO ");
			break;

			case 1:
			printf (" ONE ");
			break;

			case 2:
			printf (" TWO ");
			break;

			case 3:
			printf (" THREE ");
			break;

			case 4:
			printf (" FOUR ");
			break;

			case 5:
			printf (" FIVE ");
			break;

			case 6:
			printf (" SIX ");
			break;

			case 7:
			printf (" SEVEN ");
			break;

			case 8:
			printf (" EIGHT ");
			break;

			case 9:
			printf (" NINE ");
			break;	
		}
			n /= 10;
	}
}