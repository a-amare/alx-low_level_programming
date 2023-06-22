#include "main.h"

/* 
   Function: print_alphabet
   Prints the alphabet from 'A' to 'Z' in uppercase.

   Parameters:
   None

   Returns:
   None
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
