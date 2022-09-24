#include "stdio.h"

void main ()
{
	int class1[10],class2[10],class3[10],pass1=0,pass2=0,pass3=0;float sum1=0.0,sum2=0.0,sum3=0.0;

	printf("Enter grades of First class:\n");

	for (int i=0;i<10;i++)
	{
		printf("Enter grade student %d: ",i+1);
		scanf ("%d",&class1[i]);
	}

	printf("Enter grades of second class:\n");

	for (int i=0;i<10;i++)
	{
		printf("Enter grade student %d: ",i+1);
		scanf ("%d",&class2[i]);
	}

	printf("Enter grades of third class:\n");

	for (int i=0;i<10;i++)
	{
		printf("Enter grade student %d: ",i+1);
		scanf ("%d",&class3[i]);
	}

	int highest1=class1[0];
	int lowest1=class1[0];


	for (int i=0;i<9;i++)
	{
		if (class1[i+1]<lowest1)
			lowest1 =class1[i+1];
		if (class1[i+1]>highest1)
			highest1 =class1[i+1];
	}


	for (int i=0;i<10;i++)
	{
		if (class1[i]>=60)
			pass1++;
		 sum1 +=class1[i];
	}
	printf ("for class 1: Number of passed students = %d and Number of failed student = %d\n",pass1,10-pass1);
	printf ("Highest grade = %d and Lowest grade = %d and Average of grades =%.2f\n",highest1,lowest1,sum1/10);

	int highest2=class2[0];
	int lowest2=class2[0];


	for (int i=0;i<9;i++)
	{
		if (class2[i+1]<lowest2)
			lowest2 =class2[i+1];
		if (class2[i+1]>highest2)
			highest2 =class2[i+1];
	}


	for (int i=0;i<10;i++)
	{
		if (class2[i]>=60)
			pass2++;
		 sum2 +=class2[i];
	}
	printf ("\nfor class 2: Number of passed students = %d and Number of failed student = %d\n",pass2,10-pass2);
	printf ("Highest grade = %d and Lowest grade = %d and Average of grades =%.2f\n",highest2,lowest2,sum2/10);

	int highest3=class3[0];
	int lowest3=class3[0];


	for (int i=0;i<9;i++)
	{
		if (class3[i+1]<lowest3)
			lowest3 =class3[i+1];
		if (class3[i+1]>highest3)
			highest3 =class3[i+1];
	}


	for (int i=0;i<10;i++)
	{
		if (class3[i]>=60)
			pass3++;
		 sum3 +=class3[i];
	}
	printf ("\nfor class 3: Number of passed students = %d and Number of failed student = %d\n",pass3,10-pass3);
	printf ("Highest grade = %d and Lowest grade = %d and Average of grades =%.2f\n",highest3,lowest3,sum3/10);

}

