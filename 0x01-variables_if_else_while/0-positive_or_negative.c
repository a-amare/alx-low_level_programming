#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * IF ELSE TRIAL
 *
 * THIS FUNCTION IS RESPONSIBLE FOR STARTING THE EXECUTION OF THE PROGRAM.
 * IT IS THE ENTRY POINT FOR THE PROGRAM'S EXECUTION AND TYPICALLY CONTAINS
 * THE MAIN LOGIC AND FUNCTION CALLS.
 *
 * RETURN: 0 ON SUCCESSFUL EXECUTION
 */
int main(void)
{
  /* this is the main one */
  int n; 
  srand(time(0));
  n = rand() - RAND_MAX / 2;
  /* your code goes there */
  if (n > 0)
    return (printf("%d is positive\n", n));
  else if (n < 0)
    return (printf("%d is negative\n", n));
  else
    return (printf("%d is zero\n", n));
  return (0);
}
