#include "main.h"

/**
 * print_last_digit - prints last digit of a number by using
 *                    the modulus(%)operator
 * @i : integer to be operated on
 *
 * Return: the last digit of input i
 *
 */

int print_last_digit(int i)
{
	int last_digit;


	last_digit = i % 10;

	return (last_digit);
}
