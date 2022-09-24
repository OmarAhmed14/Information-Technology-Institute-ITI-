#include "max_min.h"

int max (int a ,int b ,int c,int d)
{
	int max1 = a;
	if (b>max1)
		max1 =b;
	if (c>max1)
		max1=c;
	if (d>max1)  
		max1=d;
	
	return max1;
}

int min (int a ,int b ,int c,int d)
{
	int min1 = a;
	if (b<min1)
		min1 =b;
	if (c<min1)
		min1=c;
	if (d<min1)  
		min1=d;
	
	return min1;
}