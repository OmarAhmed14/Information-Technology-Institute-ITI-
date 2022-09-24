/* implementation of binary search by using recursion */

#include "binary_search.h"


int binary_search_recursion (int arr [],int start,int end,int value)
{

		int mid = start + (end - start) / 2;

		if (start>end)
			return -1;

		else if (value == arr[mid])
			return mid;

		else if (value > arr[mid])
			return binary_search_recursion(arr,mid+1,end,value);

		else
			return binary_search_recursion(arr,start,mid-1,value);

}