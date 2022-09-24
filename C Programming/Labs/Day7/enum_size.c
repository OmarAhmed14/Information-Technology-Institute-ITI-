#include <stdio.h>

typedef enum Days
{
	satarday,
	sunday,
	monday,
	tuesday,
	wednesday,
	thursday,
	friday,
}day;

void main()
{
	day x=friday;

	printf("size of enum = %d\n",sizeof (x));
	

}