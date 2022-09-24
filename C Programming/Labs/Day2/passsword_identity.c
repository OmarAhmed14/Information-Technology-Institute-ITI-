#include <stdio.h>

void main ()
{
	 int id,password;
		
	printf ("Enter Your ID: ");
	scanf ("%d",&id);

	switch (id)
	{
		case 10:
		
			printf ("Enter Your Password: ");
			scanf ("%d",&password);
			if (password==1234)
			{
				printf("Welcome Ahmed\n");
			}
			else {
				printf("incorrect pasword\n");		
				 }
			
			break;
		

			case 13:
		
			printf ("Enter Your Password: ");
			scanf ("%d",&password);
			if (password==4567)
			{
				printf("Welcome Mohamed\n");
			}
			else {
				printf("incorrect pasword\n");		
				 }
			break;
		

			case 18:
		
			printf ("Enter Your Passwoed: ");
			scanf ("%d",&password);
			if (password==0124)
			{
				printf("Welcome Omar\n");
			}
			else {
				printf("incorrect pasword\n");		
				 }
			break;
		

			case 15:
		
			printf ("Enter Your Password: ");
			scanf ("%d",&password);
			if (password==1478)
			{
				printf("Welcome Mostafa\n");
			}
			else {
				printf("incorrect pasword\n");		
				 }
			break;
		

			default:
			
				printf("You are not exist\n");
				break;	
				
	}
}