/*
 * File: 9-print_comb.c
 * Author: Your Name
 *
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
	/* this is the main fun */
	int d1;

	for (d1 = 0; d1 <= 9; d1++)
	{
		putchar(d1 + '0');
		if (d1 != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
