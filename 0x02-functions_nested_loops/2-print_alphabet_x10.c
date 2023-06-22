#include "main.h"

/**
 * Function: print_alphabet_x10
 *
 * return: void
 *
*/

void print_alphabet(void);

/**
 * Function: print_alphabet
 * ------------------------
 * Prints the alphabet from 'a' to 'z' in lowercase.
 *
 * Parameters:
 *     None
 *
 * Returns:
 *     void
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
