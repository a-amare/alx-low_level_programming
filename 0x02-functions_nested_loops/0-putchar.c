/*
 * 0-putchar.c
 * Author: Me
 */

/**
 * main - Entry point
 *
 * Description: Prints _putchar
 *
 * Return: Always 0 (Success)
 */

int _putchar(char c);

int main(void)
{
	int i;
	char phrase[] = "_putchar";

	for (i = 0; phrase[i] != '\0'; i++)
	{
		_putchar(phrase[i]);
	}
	_putchar('\n');
	return (0);
}
