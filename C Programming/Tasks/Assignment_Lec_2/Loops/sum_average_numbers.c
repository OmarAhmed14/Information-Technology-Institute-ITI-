#include <stdio.h>

void main ()
{
	int num[10],sum=0; float average;
	for (int i=0;i<10;i++)
	{
		printf ("Enter Number %d: ",i+1);
		scanf ("%d",&num[i]);
	}

	for (int i=0;i<10;i++)
	{
		sum+=num[i];
	}

	average= sum/10.0;

	printf ("\nSum = %d\n",sum);
	printf ("\naverage = %.2f\n",average);
}