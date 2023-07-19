#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func(char *s) - This function returns a pointer to the function
 *                        that corresponds to the operator given as parameter.
 *                        Example: get_op_func("+") should return a pointer to
 *                        the function op_add
 *
 * Return: final answer ?
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int i;

	for (i = 0; ops[i].op != NULL; i++)
	{
		if ((*ops[i].op) == *s)
		{
			return (ops[i].f);
		}
	}

	printf("Error");
	exit(99);
}
