#include "main.h"

/**
 * swap_int - swaps two integers arrays
 *
 *@a: int pointer for first argument
 *@b: integer array inputs
 *
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
