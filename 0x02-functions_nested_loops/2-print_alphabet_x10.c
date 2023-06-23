#include "main.h"

/**
 * print_alphabet_x10 - prints tentimes
 *
 * Return - tentimes
 *
*/

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 97; j <= 122; j++)
		{
			char x = (char) j;

			_putchar(x);
		}
		_putchar('\n');

	}
}
