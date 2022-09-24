#include "sqrt.h"

int squrt (int num)
{
	for (int i=2;i<num;i++)
	{
		if (num==i*i)
			return i;
	}
	return 0;
}