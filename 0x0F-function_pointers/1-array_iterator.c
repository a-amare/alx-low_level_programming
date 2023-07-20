#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - execute the input function on every element of the array
 * @array: input array
 * @size: size of input array
 * @action: pointer to function
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	if (!array || !action)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}

}
