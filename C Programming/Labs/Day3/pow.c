#include "pow.h"

float power (float b , int power)
{
	float num=1.0;

	if (power==0)
		return 1;
	else
	{
		while (power !=0)
		{
			num*=b;
			power --;
		}
		return num;
	}
}