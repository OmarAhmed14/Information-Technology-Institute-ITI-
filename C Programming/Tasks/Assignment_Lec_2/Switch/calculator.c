#include <stdio.h>

void main ()
{
	float a,b; char op;

	printf ("\nEnter an operator (+,-,*,/): ");
	scanf ("%c",&op);

	printf ("\nEnter two operands: ");
	scanf ("%f %f",&a,&b);

	switch (op)
	{
		case '+':
		{
			printf ("\n%.2f + %.2f = %.2f",a,b,a+b);
			break;
		}

		case '-':
		{
			printf ("\n%.2f - %.2f = %.2f",a,b,a-b);
			break;
		}

		case '*':
		{
			printf ("\n%.2f * %.2f = %.2f",a,b,a*b);
			break;
		}

		case '/':
		{
			printf ("\n%.2f / %.2f = %.2f",a,b,a/b);
			break;
		}

		default:
		{
			printf ("\nWrong operator");
			break;
		}

	
	
	}

}