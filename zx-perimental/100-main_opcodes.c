#include <stdio.h>

/**
 * main - main
 * @argv - variables
 * @argc - count
 * Return: hex text
 */

int main (int argc, char argv[])
{
	int number_of_bytes;
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (number_of_bytes < 0)
	{
		printf("Error");
		exit(2);
	}
	void (*print_opcodes)(int);
	
