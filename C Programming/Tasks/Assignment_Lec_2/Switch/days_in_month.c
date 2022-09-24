#include <stdio.h>

void main ()
{
	int month;
	printf ("\nEnter month number: ");
	scanf("%d",&month);

	switch (month)
	{
		case 1:
		{
			printf ("31 days\n");
			break;
		}

		case 2:
		{
			printf ("28 or 29 days\n");
			break;
		}

		case 3:
		{
			printf ("31 days\n");
			break;
		}

		case 4:
		{
			printf ("30 days\n");
			break;
		}

		case 5:
		{
			printf ("31 days\n");
			break;
		}

		case 6:
		{
			printf ("30 days\n");
			break;
		}

		case 7:
		{
			printf ("31 days\n");
			break;
		}

		case 8:
		{
			printf ("31 days\n");
			break;
		}

		case 9:
		{
			printf ("30 days\n");
			break;
		}

		case 10:
		{
			printf ("31 days\n");
			break;
		}

		case 11:
		{
			printf ("30 days\n");
			break;
		}

		case 12:
		{
			printf ("31 days\n");
			break;
		}

		default:
		{
			printf ("incorrect month number\n");
			break;
		}
	}
}
