#include <stdio.h>
/**
 * PRINTS ALL COMBINATION OF TWO DIGITS DELIMITED BY ,
 */

int main(void)
{
  for (int d1 = 0; d1 <= 9; d1++)
    {
      for (int d2 = 0; d2 <= 9; d2++)
	{
	  putchar(d1 + '0');
	  putchar(d2 + '0');
	  putchar(',');
	}
    }
  putchar('\n');

  return (0);
}

      
