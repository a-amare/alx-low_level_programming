#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>

/**
 * main - adds numbers
 *
 * @argv: v
 * @argc: count
 *
 * Return: success or failure
 */

int main(int argc, char **argv)
{
	int sum, i;

	if (argc <= 1)
	{
		printf("0\n");
		return (EXIT_FAILURE);
	}

	for (i = 1; i <= argc; i++)
	{
		if (isdigit(atoi(argv[i])))
		{
			sum += *argv[i];
			printf("%d/n", sum);
		}

		else
		{
			printf("Error\n");
			return (EXIT_FAILURE);
		}
	}

	printf("final sum = %d\n", sum);
	return (EXIT_SUCCESS);
}
