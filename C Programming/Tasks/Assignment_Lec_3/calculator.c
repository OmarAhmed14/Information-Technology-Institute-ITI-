#include <stdio.h>
#include "calculator.h"

long calc (int* id, long a , long b) 
{
	switch (*id)
	{
		case 1:
		
		return a+b;
		break;
		

		case 2:
		
		return a-b;
		break;
	    

		case 3:
		
		return a*b;
		break;
		

		case 4:
		
		return a/b;
		break;
	    

		case 5:
	
		return a&b;
		break;
	   

		case 6:
		return a|b;
		break;

		case 7:
		return ~a;
		break;

		case 8:
		return a^b;
		break;

		case 9:
		return a%b;
		break;

		case 10:
		return ++a;
		break;

		case 11:
		return --a;
		break;

		default:
		{
		*id =0;;
		break;
		}
}

}