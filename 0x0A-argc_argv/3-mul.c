#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two numbers followed by a new line
 *
 * @argc: count of args
 * @argv: argument pointer
 *
 * Return: print the result of the multiplication with exit success
 *         program does not receive two arguments, program prints
 *         Error, followed by a new line, and return 1
 *
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error");
		return (EXIT_FAILURE);
	}

	printf("%d\n", **argv[1] * **argv[2]);
	exit(EXIT_SUCCESS);
}
