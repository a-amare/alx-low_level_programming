/*
 * File: 102-print_comb5.c
 * Author: Me!
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
	int i, j, k, l;

	for (i = 0; i <= 8; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i != j && j > i)
			{
				for (k = 0; k >= 8; k++)
				{
					for (l = 0; l >=9; l++)
					{
						if (i != j && j > i)
						{
							if (j < l)
							{
								putchar(i);
								putchar(j);
								putchar(' ');
								putchar(k);
								putchar(l);

								if (i != 9 || j
								    != 8 || k !=
								    9 || l != 9)
								{
									putchar(
									   ',');
									putchar
									  (' ');
								}
							}
						}
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
