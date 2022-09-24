#include "stdio.h"

void main ()
{

	float salary;

	printf("\nEnter basic salary of an employee: ");
	scanf ("%f",&salary);

	if (salary<=10000)
	{
		printf ("GROSS SALARY OF EMPLOYEE = %.2f\n",salary+0.2*salary+0.8*salary);
	}
	else if (salary>=10001 && salary <=20000)
	{
		printf ("GROSS SALARY OF EMPLOYEE = %.2f\n",salary+0.25*salary+0.9*salary);
	}
	else 
	{
		printf ("GROSS SALARY OF EMPLOYEE = %.2f\n",salary+0.3*salary+0.95*salary);
	}

}