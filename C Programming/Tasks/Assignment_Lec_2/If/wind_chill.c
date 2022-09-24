#include "stdio.h"

void main ()
{
	float v,t,WCI;

	printf("\nEnter Wind Speed in miles per hour: ");
	scanf ("%f",&v);

	printf("Enter Temperature in Fahrenheit: ");
	scanf ("%f",&t);

	if (v>=0 && v<=4)
	{
		WCI = t;
	}
	else if (v>=45)
	{
		WCI = 1.6*t-55;
	}
	else 
	{
		WCI = 91.4 + (91.4-t)*(0.0203*v-0.304*0.5*v-0.474);
	}
	printf ("For Temperature %.2f and Wind Speed is %.2f\n",t,v);
	printf ("Wind Chill Index is: %.2f\n",WCI);

}