#include <stdio.h>
/**
 * PRINTS ALL COMBINATION OF TWO DIGITS DELIMITED BY ,
 */

int main(void)
{
  int d1;
  for (d1 = 0; d1 < 9; d1++)
    {
      putchar(d1 + '0');
      if (n != 9)
	putchar(',');
      putchar(' ');

    }
  putchar(9 + '0');
  putchar('\n');

  return (0);
}
