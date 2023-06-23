#include "main.h"

/**
 * _abs - checks input and converts it to a positive value
 *
 * @i - integer input
 *
 * Return: absolute value of a number
 */

int _abs(int i)
{
	if (i < 0)
		return (-i);
	return (i);
}
