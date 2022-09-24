#include <stdio.h>

void main ()
{
	int id,pass;
	printf("Enter your ID: ");
	scanf ("%d",&id);

	switch (id)
	{
		case 1234:
		{
			printf ("Enter your password: ");
				scanf("%d",&pass);
				if(pass==7788)
				{
					printf ("Welcome Ahmed");
					break;
				}
				else
				{
					printf ("incorrect password");
				}
			break;
		}

		case 5678:
		{
			printf ("Enter your password: ");
				scanf("%d",&pass);
				if(pass==1478)
				{
					printf ("Welcome Alaa");
					break;
				}
				else
				{
					printf ("incorrect password");
				}
			break;
		}

		case 1597:
		{
			printf ("Enter your password: ");
				scanf("%d",&pass);
				if(pass==9632)
				{
					printf ("Welcome Mostafa");
					break;
				}
				else
				{
					printf ("incorrect password");
				}
			break;
		}

		default:
		{
			printf ("incorrect id");
			break;
		}
	
	}
}