#include "stdio.h"
#include "duplicates.h"

void duplicates (int *arr,int* n)
{
  for (int i = 0 ; i < *n ;i++)
  {
	  for (int j = i+1 ;j<*n;j++)
	  {
			if (arr[i] == arr[j])           
			{ 
				for (int k = j; k < *n; k++)  
            {  
              arr[k] = arr[k + 1];  
            }  
				(*n)--;
		}
   		}
  }
}
