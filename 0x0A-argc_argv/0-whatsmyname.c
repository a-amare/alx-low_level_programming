#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - a program that prints its name, followed by a new line.
 *          If you rename the program, it will print the new name,
 *          without having to compile it again
 *
 * @argc: argument count
 * @argv: argument pointer
 *
 * Return: name of program with exit status
 */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv);
	}

	exit(EXIT_SUCCESS);
}
