/* implementation of binary search */

#include "binary_search.h"


int binary_search (int arr [],int size,int value)
{
	int start = 0;
	int end = size -1; 

	while (start<=end)
	{
		int mid = start + (end - start) / 2;

		if (value == arr[mid])
			return mid;

		else if (value > arr[mid])
			start = mid+1;

		else
			end = mid-1;
	}

	return -1;
}