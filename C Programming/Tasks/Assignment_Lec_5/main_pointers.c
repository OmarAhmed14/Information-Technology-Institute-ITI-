#include "stdio.h"
#include "duplicates.h"

void main ()
{
	int x=5, y=10, z=15,*p=&x,*q=&y, *r=&z;

	printf("x= %d\n",x);   // x=5
	printf("y= %d\n",y);   // y=10   
	printf("z= %d\n",z);   // z=15
	printf("p= %p\n",p);   // p=address of x
	printf("q= %p\n",q);   // q=address of y
	printf("r= %p\n",r);   // r=address of z
	printf("*p= %d\n",*p); // *p=10
	printf("*q= %d\n",*q); // *p=15
	printf("*r= %d\n",*r); // *r=15

	printf("Swapping pointers\n");

	r=p;
	p=q;
	q=r;

	printf("x= %d\n",x);   // x=5
	printf("y= %d\n",y);   // y=10   
	printf("z= %d\n",z);   // z=15
	printf("p= %p\n",p);   // p=address of y
	printf("q= %p\n",q);   // q=address of x
	printf("r= %p\n",r);   // r=address of x
	printf("*p= %d\n",*p); // *p=10
	printf("*q= %d\n",*q); // *p=5
	printf("*r= %d\n",*r); // *r=5


}