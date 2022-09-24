#include "check_number.h"

int Prime(int r)
{
	for (int i=2;i<r;i++)
		if (r%i==0)
			return 0;
		return 1;
}

int Armstrong (int n)
{
	int sum=0,number=n;
	while (number%10 != 0) 
	{
		int num = n%10;
		sum+=num*num*num;
		number =number/10;
	}
	if (sum == n)
		return 1;
	else 
		return 0;
}

int Perfect (int z)
{
	int sum=0;
	for (int i=1;i<z;i++)
	{
		if (z%i == 0)
			sum+=i;
	}
	if (z==sum)
		return 1;
	else 
		return 0;	
}