#include "calculator.h"

void calculator (int x,int y,int* a,int* b,int* c,int* d)
{
	*a = x+y;
	*b =x*y;
	*c =x/y;
	*d =x-y;
}