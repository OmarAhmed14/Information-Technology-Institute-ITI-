#include <stdio.h>

void main ()
{
/* using array */

/*
	int num[10], searched_num;

	for (int i=1;i<=10;i++)
	{
		printf ("Enter Number %d: ",i);
		scanf("%d",&num[i]);
	}

	printf ("Enter Number you searched: ");
	scanf ("%d",&searched_num);

	for (int i=1;i<=10;i++)
	{
		if (num[i]==searched_num)
		{
			printf ("value is exist in element: %d",i);
		}
	}
*/

/* without array */

	int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,searched_num;

	printf ("\nEnter Number 1: ");
	scanf("%d",&num1);

	printf ("Enter Number 2: ");
	scanf("%d",&num2);

	printf ("Enter Number 3: ");
	scanf("%d",&num3);

	printf ("Enter Number 4: ");
	scanf("%d",&num4);

	printf ("Enter Number 5: ");
	scanf("%d",&num5);

	printf ("Enter Number 6: ");
	scanf("%d",&num1);

	printf ("Enter Number 7: ");
	scanf("%d",&num7);

	printf ("Enter Number 8: ");
	scanf("%d",&num8);

	printf ("Enter Number 9: ");
	scanf("%d",&num9);

	printf ("Enter Number 10 ");
	scanf("%d",&num10);

	printf ("\nEnter Number you searched: ");
	scanf ("%d",&searched_num);

	if (searched_num == num1)
	{
		printf ("value is exist at element number: 1\n");
	}
	else if (searched_num == num2)
	{
		printf ("value is exist at element number: 2\n");
	}
	else if (searched_num == num3)
	{
		printf ("value is exist at element number: 3\n");
	}
	else if (searched_num == num4)
	{
		printf ("value is exist at element number: 4\n");
	}

	else if (searched_num == num5)
	{
		printf ("value is exist at element number: 5\n");
	}

	else if (searched_num == num6)
	{
		printf ("value is exist at element number: 6\n");
	}

	else if (searched_num == num7)
	{
		printf ("value is exist at element number: 7\n");
	}

	else if (searched_num == num8)
	{
		printf ("value is exist at element number: 8\n");
	}

	else if (searched_num == num9)
	{
		printf ("value is exist at element number: 9\n");
	}

	else if (searched_num == num10)
	{
		printf ("value is exist at element number: 10\n");
	}
	else 
	{
		printf ("Number No Exist\n");

	}


}