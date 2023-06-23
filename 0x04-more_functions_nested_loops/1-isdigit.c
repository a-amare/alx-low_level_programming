#include "main.h"

/**
 * _isdigit - checks for numbers between 0-9
 *
 *@c: int input
 *
 *Returns - 1 if true
 *          0 if false
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
