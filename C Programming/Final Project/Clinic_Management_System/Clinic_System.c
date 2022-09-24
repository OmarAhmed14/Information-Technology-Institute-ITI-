#include <stdio.h>
#include <stdlib.h>
#include "Clinic_System.h"

patient* head=NULL,*tail=NULL;int arr[5]={1,2,3,4,5},size=5,n;
slots* head1=NULL,*tail1=NULL;int id=0,x=0;

static patient* New_Patient ()
{
	patient* ptr = (patient*) malloc (sizeof(patient));

	printf("New Patient Information:\n");

	printf ("Enter Name: ");           // Enter Name
	fflush (stdin);fflush (stdout);
	gets(ptr->name);

	printf ("Enter Gender: ");      //Enter gender
	fflush (stdin);fflush (stdout);
	gets(ptr->gender);

	printf ("Enter age: ");        // Enter age
	scanf ("%d",&(ptr->age));

	printf ("Enter id: ");          // Enter ID
	scanf ("%d",&(ptr->id));

	int x=Check_ID(ptr->id);         // check ID

	while (x==0) {
	      scanf ("%d",&(ptr->id));
	      x=Check_ID(ptr->id);}    
	
	return ptr;
}

void Add_Patient ()
{
	patient* new_patient = New_Patient();

	if (head==NULL)
		head=new_patient;
	else
		tail->next=new_patient;

	tail=new_patient;
	tail->next=NULL;
}

static int Check_ID (int id)
{
	patient* curr =head;

	while (curr!=NULL)
	{
		if (id==curr->id)
		{
			printf("This id is Already Exist,Enter another one: ");
			return 0;
			
		}

		curr = curr->next;
	}
	return 1;
}

void Print_Slots ()
{
	slots* current =head1;

	if (head1==NULL)
		printf("No Exist Elements.\n");
	else
	{
		printf ("--------Reservation Slots--------\n");
		while (current!=NULL)
		{
			printf ("ID: %d\n",current->id);
			printf ("Slot Number: %d\n",current->slot);
			printf("---------------\n");
			current = current->next;
		}
		printf("\n");
	}
}


void Edit_Data ()
{
	patient* curr =head;int id,Data,x;

	printf ("Enter Patient ID that you want to Edit: ");
	scanf("%d",&id);

	while (curr!=NULL )
	{
		if (id==curr->id)
		{
			printf ("Enter 1 to Edit Name or Enter 2 to Edit Gender Or Enter 3 to Edit Age: ");
			scanf ("%d",&Data);

			switch (Data)
			{
				case 1:
				printf ("Enter New Name: ");         // Enter New Name
				fflush (stdin);fflush (stdout);
				gets(curr->name);
				break;

				case 2:
				printf ("Enter New Gender: ");      //Enter New gender
				fflush (stdin);fflush (stdout);
				gets(curr->gender);
				break;

				case 3:
				printf ("Enter New age: ");        // Enter New age
				scanf ("%d",&(curr->age));
				break;

				default:
				printf("Wrong choice");
				break;
			}
			break;
		}

		curr = curr->next;
	}

	if (curr==NULL)
	{
		printf ("Incorrect ID.Try Again\n");
		Edit_Data();
	}

	printf ("Enter 1 to Continue Or 0 to Exit: ");
	scanf ("%d",&x);
			
	if (x==0);
	else
		Edit_Data();
}


void Patient_Reservation ()
{
	int i=0;
	patient* current =head;
	
	printf("----------IMPORTANT NOTE----------\n");
	printf ("Number 1 represent slot from 2 PM to 2:30 PM\n");
	printf ("Number 2 represent slot from 2:30 PM to 3 PM\n");
	printf ("Number 3 represent slot from 3 PM to 3:30 PM\n");
	printf ("Number 4 represent slot from 3:30 PM to 4 PM\n");
	printf ("Number 5 represent slot from 4 PM to 4:30 PM\n");
	printf ("--------Available slots--------\n");

	for (int i=0;i<size;i++)  
	{
		printf ("%d\t",arr[i]);
	}
	printf ("\n");


	printf("\nEnter Patient ID to Reserve a slot: ");
	scanf ("%d",&id);

	while (current!=NULL)
	{
		if (current->id == id)
			break;
		else
		current =current->next;
	}

	if (current==NULL)
	{
		printf("Wrong ID, Try Again: ");
		scanf ("%d",&id);
	}

	printf ("\nEnter number of slot that you want: ");
	scanf ("%d",&x);

	Add_slot();

	while (i<size)
	{
		if (x==arr[i])
		{
			if (i<(size-1))
				for (int j=i;j<(size-1);j++)
					arr[j]=arr[j+1];
			size--;
		}
		else
			i++;
	}
}


static slots* New_Slot ()
{
	slots* ptr = (slots*) malloc (sizeof(slots));

	ptr->id=id;
    ptr->slot=x;
	
	return ptr;
}

void Add_slot ()
{
	slots* new_slot = New_Slot();

	if (head1==NULL)
		head1=new_slot;
	else
		tail1->next=new_slot;

	tail1=new_slot;
	tail1->next=NULL;
}

void Cancel_Reservation ()
{
	int num;slots* q=NULL;slots*prev=NULL , *curr=head1;

	printf("Enter ID patient to Cancel Reservation: ");
	scanf("%d",&num);

	if (head1 == NULL)
		printf ("No Exist Elements.\n");

	else if (head1->id == num){
		n = head1->slot;
		Delete_First();	
	}

	else if (tail1->id == num){
		n=tail1->slot;
		Delete_Last;
	}

	else
	{
		while (curr->id !=num  && curr->next !=NULL)
		{
			prev = curr;
			curr=curr->next;
		}

		if (curr->next !=NULL)
		{
			prev->next=curr->next;
			n=curr->slot;
			free (curr);
		}
		else
			printf ("This Slot is not exist to be deleted.\n");
	}
	Add_cancle_Slot();
}
static void Delete_Last ()
{
	slots* prev=NULL , *curr=head1;

	if (head1==NULL)
		printf ("No Exist Elements.\n");

	else if (head1 == tail1)
	{
		head1 = NULL;
		tail1 =NULL;
		free (curr);
	}

	else
	{
		while (curr->next!=NULL)
		{
			prev=curr;
			curr=curr->next;
		}
		prev->next=NULL;
		free (curr);
		tail1 = prev;
	}
}

static void Delete_First ()
{
	slots* temp =head1;

	if (head1==NULL)
		printf ("No Exist Elements.\n");

	else if (head1 == tail1)
	{
		head1 = head1->next;
		tail1 =NULL;
		free (temp);
	}

	else
	{
		head1 = head1->next;
		free (temp);
	}
}

void Print_Basic_Infotmation ()
{
	patient* current =head;int id;

	printf ("Enter Patient ID to show Basic Infotmation: ");
	scanf ("%d",&id);

	if (head==NULL)
		printf("No Exist Elements.\n");
	else
	{
		printf ("--------Basic Infotmation--------\n");
		while (current!=NULL)
		{
			if (current->id==id)
			{
				printf ("Name: %s\n",current->name);
				printf ("Gender: %s\n",current->gender);
			    printf ("Age: %d\n",current->age);	
				printf("---------------\n");
			}
			current = current->next;
		}
		printf("\n");
	}
}
void Add_cancle_Slot()     
{
	int y=0;

	for (int i=size-1;i>=0;i--)   // 1 5 n=1 y=1     size=1  1-1=0   arr[0]=1
	{
		if (arr[i]>n)
		{
			arr[i+1]=arr[i];
			y++;
		}
	}

	arr[size-y]=n;
	//arr[size]=n;

	printf ("--------------Available Slots------------\n");

	for (int i=0;i<=size;i++)
		printf("%d\t",arr[i]);
	printf("\n");	
	size++;
}