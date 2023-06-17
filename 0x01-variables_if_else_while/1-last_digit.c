#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function is responsible for starting the execution of the program.
 * It is the entry point for the program's execution and typically contains
 * the main logic and function calls.
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* My code */
	l = n % 10;

	if (l > 5)
		return (printf("Last digit of %d is %d and is greater than 5\n", n, l));
	else if (l == 0)
		return (printf("Last digit of %d is %d and is 0\n", n, l));
	else
		return (printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l));

	return (0);
}
