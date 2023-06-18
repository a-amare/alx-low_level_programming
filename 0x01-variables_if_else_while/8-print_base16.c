/*
 * File: 8-print_base16.c
 * Author: Me
 */

#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers
 * separated by commas.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 0; num < 16; num++)
	{
		if (num < 10)
			putchar(num + '0');
		else if (num > 10)
			putchar((9 - num) + 'a');
	}
	putchar('\n');

	return (0);
}
