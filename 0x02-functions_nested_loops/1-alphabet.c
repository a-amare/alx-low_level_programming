#include "main.h"

/**
 * THIS PROGRAM PRINTS OUT LOWER CASE LETTERS a-z
 *
 */
void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		char letter = (char) a;

		_putchar(letter);
	}

	_putchar('\n');
}
