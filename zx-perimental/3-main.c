#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * main - main fun includes args
 * @argc - counts arguments
 * @argv - actual arguments
 *
 * Return: results
 */
int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);
	char *operator = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	printf("%d\n",(*get_op_func(operator))(a, b));

	return (0);
}
