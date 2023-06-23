#include "main.h"

/**
 * _islower - function to check if
 *           character is a letter
 *
 * @c: checks input of function
 *
 * Return: returns 1 if `c` is uppercase or lowercase
 *         otherwise always 0 (Success)
*/


int _isalpha(int c)
{
	if ( c >= 97 && c <= 122 || c >= 65 && c <= 90)
		return (1);
	else
		return (0);

}
