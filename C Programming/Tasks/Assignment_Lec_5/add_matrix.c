#include "stdio.h"
#include "add_matrix.h"
 

int* add_matrix (int* arr1, int* arr2,int size)
{
	static int arr3[10];

	for (int i=0;i<size;i++)
	{
		*(arr3+i) = *(arr1+i) + *(arr2+i);
	}
	return arr3;
}