#include "stdio.h"
#include "circle.h"

void main ()
{
	float dia,R;

	printf ("Enter Radius of circle: ");
	scanf ("%f",&R);

	printf ("Enter Diameter of circle: ");
	scanf ("%f",&dia);

	printf ("circumference of the circle = %.2f\n",circumference(R));
	printf ("Area of the circle = %.2f\n",area(R));

}