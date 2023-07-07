#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives.
 *        All arguments should be printed, including the first one
 *        Only print one argument per line, ending with a new line
 *
 * @argc: count of arguments
 * @argv: pointer to arguments
 *
 * Return: argument count and a new line with exit status
 */

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
