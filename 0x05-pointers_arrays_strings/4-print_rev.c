#include "main.h"

/**
 * print_rev - prints a string in reverse order
 *
 *@s: pointer variable/ address
 *
 * Return: none
 *
 */

void print_rev(char *s)
{
	int x = 0;

	while (*(s + x) != '\0')
	{
		x++;
	}

	while (x >= 0)
	{
		_putchar(*(s + x));
		x--;
	}
	_putchar('\n');
}
