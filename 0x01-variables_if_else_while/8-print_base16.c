#include <stdio.h>

/**
 * THIS PROGRAM DISPLAYS THE HEXADECIMAL NUMBERS
 *
 */

int main(void)
{
  /* we declare our variable */
  int num = 0;
  char c = 'a';

  for(; num <= 9; num++)
    {
      putchar(num);
      putchar(',');
    }
  for(; c <= 'f'; c++)
    {
      putchar(c);
      putchar(',');
    }
  putchar('\n');
  
  return (0);
}
