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
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
		return (printf("%d is positive\n", n));
	else if (n < 0)
		return (printf("%d is negative\n", n));
	else
		return (printf("%d is zero\n", n));

	return (0);
}
