/* implementation of selecrtion_sort */

#include "selection_sort.h"


void selection_sort (int arr [],int size)
{
	int index_min,prev,i,j ;

	for (i=0;i<size;i++)     
	{
		prev=0;index_min=i;
		
		for (j=i+1;j<size;j++)
		{
			if (arr[index_min]>arr[j])
			{
				prev++;
				index_min = j;
			}
			
		}
		 if (prev)
		 {
			int temp = arr[i];
			arr[i]=arr[index_min];
			arr[index_min]=temp;
		}
	}
	
}