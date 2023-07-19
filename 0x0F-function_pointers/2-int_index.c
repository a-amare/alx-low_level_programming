#include "function_pointers.h"

/**
 * int_index - returns the index of the first element for which the cmp fun
 *             -ction does not return 0
 *
 *@array: input array
 *@size: size of array
 *@cmp: name of comparison function
 * Return: index if it finds it
 *         If no element matches, return -1
 *If size <= 0, return -1
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
