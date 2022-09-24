#include "root.h"



int root (int n, int x)
{
	switch (x)
	{
		case 2:
		for (int i=2;i<n;i++) 
		{
			if (n==i*i)
				return i;
		}
		return 0;
		break;

		case 3:
		for (int i=2;i<n;i++) 
		{
			if (n==i*i*i)
				return i;
		}
		return 0;
		break;

		case 4:
		for (int i=2;i<n;i++) 
		{
			if (n==i*i*i*i)
				return i;
		}
		return 0;
		break;

	}
	
}