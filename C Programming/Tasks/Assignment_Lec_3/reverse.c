#include "reverse.h"

int num=0;

int reverse (int n)
{
	if (n>0)
	{
		num = n%10 +num*10; 
		reverse (n/10);
	}
	else
	return num;
}