#include "stdio.h"

struct clock
{
	int h;
	int m;
	int s;
};

void main ()
{
	struct clock obj1,obj2;char c;

	printf("Enter First Time: ");
	scanf ("%d%c%d%c%d",&obj1.h,&c,&obj1.m,&c,&obj1.s);

	printf("Enter Second Time: ");
	scanf ("%d%c%d%c%d",&obj2.h,&c,&obj2.m,&c,&obj2.s);

	printf ("-------------\n");

	printf ("Difference between Time: %02d:%02d:%02d\n",obj1.h-obj2.h,obj1.m-obj2.m,obj1.s-obj2.s);
}