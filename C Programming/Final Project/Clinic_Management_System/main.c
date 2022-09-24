#include <stdio.h>
#include <stdlib.h>
#include "Clinic_System.h"

void main ()
{
	// char mode; int pass,i,x;

	// printf("Enter 1 to Choose Admin Mode Or Enter 2 to Choose User Mode: ");
	// scanf ("%d",&mode);

	// switch (mode)
	// {
	// 	case 1:
	// 	{
	// 		int i=0;
	// 		printf ("Enter Password: ");
	// 		scanf ("%d",&pass);

	// 		while (pass!=1234)
	// 		{
	// 			i++;
	// 			if (i==3)
	// 				exit (0);
	// 			printf("Wrong Password,Try Again: ");
	// 			scanf ("%d",&pass);
	// 		}

	// 		int num;
	// 		printf("1-Add new patient record\n");
	// 		printf("2-Edit patient record\n");
	// 		printf("3-Reserve a slot with the doctor\n");
	// 		printf("4-Cancel reservation\n");
	// 		printf("--------------------------------------------------------------------------\n");
	// 		printf("Enter 1 to Add new patient record Or Enter 2 to Edit patient record Or Enter 3 to Reserve a slot with the doctor Or Enter 4 to Cancel reservation: ");
	// 		scanf ("%d",&num);

	// 		switch (num)
	// 		{
	// 			case 1:
	// 			i=1;
	// 			do{
	// 			Add_Patient ();
	// 			printf("Enter 0 to exit or 1 to add another patient: ");
	// 			scanf("%d",&i);
	// 			}while(i);
	// 			printf("Enter 1 to Edit_Data case Or 0 to exit: ");
	// 			scanf ("%d",&x);
	// 			if (x);
	// 			else
	// 				break;

				
	// 			case 2:
	// 			Edit_Data();
	// 			printf("Enter 1 to Patient_Reservation case Or 0 to exit: ");
	// 			scanf ("%d",&x);
	// 			if (x);
	// 			else
	// 				break;
					
	// 			case 3:
	// 			i=1;
	// 			do{
	// 			Patient_Reservation ();
	// 			printf("Enter 0 to exit or 1 to Reserve another slot: ");
	// 			scanf("%d",&i);
	// 			}while(i);
	// 			printf("Enter 1 to Cancel_Reservation case Or 0 to exit: ");
	// 			scanf ("%d",&x);
	// 			if (x);
	// 			else
	// 				break;
						

	// 			case 4:
	// 			i=1;
	// 			do{
	// 			Cancel_Reservation ();
	// 			printf("Enter 0 to exit or 1 to Cancel another slot: ");
	// 			scanf("%d",&i);
	// 			}while(i);
	// 			break;

	// 			default:
	// 			printf("Wrong choice\n");
	// 			break;
	// 		}	
	// 	}
	// 	int y;
	// 	printf("Enter 1 to choose user mode Or Enter 0 to Exit: "); scanf("%d",&y);
	// 	if (y);
	// 	else
	// 		break;

	// 	case 2:
	// 	{
	// 		int num;
	// 		printf("1-View patient record\n");
	// 		printf("2-View today reservations\n");
	// 		printf("--------------------------------------------------------------------------\n");
	// 		printf("Enter 1 to view patient record Or Enter 2 to view today reservations: ");
	// 		scanf ("%d",&num);

	// 		switch (num)
	// 		{
	// 			case 1:
	// 			Print_Basic_Infotmation ();
	// 			break;

	// 			case 2:
	// 			Print_Slots ();
	// 			break;

	// 			default:
	// 			printf("Wrong choice\n");
	// 			break;
	// 		}	
	// 	}
	// 	break;
	// }



	Add_Patient ();
	Add_Patient ();
	Add_Patient ();
	Add_Patient ();
	Add_Patient ();

	Patient_Reservation ();
	Patient_Reservation ();
	Patient_Reservation ();
	Patient_Reservation ();

	Cancel_Reservation ();
	Cancel_Reservation ();
	Cancel_Reservation ();
	Cancel_Reservation ();
}

