#include <stdio.h>


void main ()
{
	int bit , num , Set_num;
	
	printf ("Enter Number That You Want to toggle in it\n");
	
	scanf ("%d",&num);
	
	printf ("Enter Bit Number That You Want to toggle\n");
	
	scanf ("%d",&bit);
	
	Set_num = num ^ (1<<bit);
	
	printf ("Number became = %d",Set_num);	

}