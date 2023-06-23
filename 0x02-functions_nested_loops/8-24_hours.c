#include "main.h"

/**
 * jack_bauer - prints all the minutes in a day
 *              00:00 - 23:59
 */
void jack_bauer(void)
{
	int i, j, k, l;

	int check_24 = 0;


	for (i = 0; i <= 2; i++)
	{
		if (check_24 == 1)
			break;

		for (j = 0; j <= 9; j++)
		{
			if (i == 2 && j == 4)
			{
				check_24 = 1;
				break;
			}

			for (k = 0; k <= 5; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
				}
			}
		}
	}
}
