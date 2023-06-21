/*
 * file name: 1-alphabet.c
 *
 */

int _putchar(char c);

/**
 * THIS PROGRAM PRINTS OUT LOWER CASE LETTERS a-z
 *
 */


int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		char letter = (char) a;

		_putchar(letter);
	}

	_putchar('\n');

	return (0);
}
