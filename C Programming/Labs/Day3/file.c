#include "file.h"

int fact (int n)
{
	if (n==1)
		return 1;
	else
		return n * fact(n-1);
}

int NCR (int n , int r)
{
	if (n<r)
		return 0;
	else
	return (fact(n)/(fact(n-r)*fact(r)));
}