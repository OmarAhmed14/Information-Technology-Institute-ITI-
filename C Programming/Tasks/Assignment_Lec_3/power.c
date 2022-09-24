#include "power.h"

float power (float b , int pow)
{
	float num;

	if (pow==0)
		return 1;
	else
	{
		num=b*power(b,pow-1);
		return num;
	}
}