#include "main.h"
/**
 * factorial - prints factorial
 *@n: num
 *Return: n(n-1)(n-2)
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
