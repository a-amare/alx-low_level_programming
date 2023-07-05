#include "main.h"
/**
 * _puts_recursion - prints out a string followed by a new line
 *
 * @s: input string pointer
 *
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s);
	_puts_recursion(s + 1);
}
