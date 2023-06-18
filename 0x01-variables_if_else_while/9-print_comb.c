#include <stdio.h>
/**
 * PRINTS ALL COMBINATION OF TWO DIGITS DELIMITED BY ,
 */

int main(void)
{
	/* this is the main fun */
	int d1;
	
	for (d1 = 0; d1 <=9; d1++)
	{
		putchar(d1 + '0');
		if (d1 !=9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
