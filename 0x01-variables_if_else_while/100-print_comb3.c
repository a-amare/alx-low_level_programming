/*
 * 100-print_comb3.c
 * Author: Me
 */

#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two single-digit numbers
 * separated by commas.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 8; i++)
	{
		for (j = 1; j <= 9 ; j++)
		{
			if ((i != j) && (j > i))
			{
				putchar(i + '0');
				putchar(j + '0');

				if ((i != 8) || (j !=9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
