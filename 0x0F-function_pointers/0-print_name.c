#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - prints name using _putchar
 *
 * @name: name input
 * @f: pointer f of a function
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}

}
