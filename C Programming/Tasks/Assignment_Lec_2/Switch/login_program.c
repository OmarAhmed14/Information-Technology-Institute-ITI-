#include <stdio.h>

void main ()
{
	int id,pass;

	printf ("Enter your ID: ");
	scanf("%d",&id);

	switch (id)
	{
		case 1234:
		{
			int i=0;
			printf ("Enter your password: ");
				scanf("%d",&pass);
				if(pass==7788)
				{
					printf ("Welcome Ahmed");
					break;
				}
				else
				{
					while (pass!=7788)
					{
						printf ("Try again: ");
						scanf("%d",&pass);
						i++;
						if (i==3)
						{
							printf ("incorrect password for 3 times. no more tries");
							break;
						}
					}
					if (pass == 7788)
					{
						printf ("Welcome Ahmed");
					}
				}
			break;
		}
	

		case 5678:
		{
			int i=0;
			printf ("Enter your password: ");
				scanf("%d",&pass);
				if(pass==5566)
				{
					printf ("Welcome Amr");
					break;
				}
				else
				{
					while (pass!=5566)
					{
						printf ("Try again: ");
						scanf("%d",&pass);
						i++;
						if (i==3)
						{
							printf ("incorrect password for 3 times. no more tries");
							break;
						}
					}
					if (pass == 5566)
					{
						printf ("Welcome Amr");
					}
				}
			break;
		}
	

	    case 9870:
		{
			int i=0;
			printf ("Enter your password: ");
			scanf("%d",&pass);
			if(pass==1122)
			{
				printf ("Welcome Wael");
				break;
			}
			else
			{
				while (pass!=1122)
				{
					printf ("Try again: ");
					scanf("%d",&pass);
					i++;
					if (i==3)
					{
						printf ("incorrect password for 3 times. no more tries");
						break;
					}
				}
				if (pass == 1122)
				{
					printf ("Welcome Wael");
			}	}
			break;
		}

		default: 
		{
			printf("you are not registered");
			break;
		}
		
	}
}