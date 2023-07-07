#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main -  a program that prints all arguments it receives.
 *
 * @argc: argument count
 * @argv: array of argument
 *
 *Return: all arguments on its own line
 *        with exit success.
 */

int main(int argc, char **argv)
{
	argc -= 1;
	argv++;
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (EXIT_SUCCESS);
}
