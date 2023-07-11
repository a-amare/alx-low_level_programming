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
	int j, i;
	int sum;

	if (argc == 1)
	{
		printf("0");
		return (EXIT_SUCCESS);
	}

	for (j = 1; j < argc; j++)
	{
		char *number = argv[j];

		for (i = 0; i != '\0'; i++)
		{
			if (!isdigit(number[i]))
			{
				printf("Error\n");
				return (EXIT_FAILURE);
			}
		}

		sum += atoi(number);
	}


	printf("%d\n", sum);

	return (EXIT_SUCCESS);
}
