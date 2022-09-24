#include "func_swap.h"

extern int x,y;
void swap ()
{
	int temp = x;
	x=y;
	y=temp;
}