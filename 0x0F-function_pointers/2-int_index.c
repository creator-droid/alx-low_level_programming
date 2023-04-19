#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - a function that searches for an intege
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k;
	if (array == NULL || size <= 0 || cmp == NULL)
		return(-1);
	for (k = 0; k < size; k++)
	{
		if (cmp(array[k]))
			return (k);
	}
	return(-1);
}
