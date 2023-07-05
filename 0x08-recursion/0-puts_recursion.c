#include "main.h"
/**
 * _puts_recursion - prints out a string followed by a new line
 *
 * @s: input string pointer
 *
 */

void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}

	_putchar('\n');
}
