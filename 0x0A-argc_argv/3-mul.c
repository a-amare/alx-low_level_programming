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

int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (EXIT_FAILURE);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);
	return (EXIT_SUCCESS);
}
