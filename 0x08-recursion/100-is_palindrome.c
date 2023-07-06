#include "main.h"

/**
 * is_palindrome - checks if a word is the same backwards
 *
 *@s: string input pointer
 *
 * Return: 0 if false
 *         1 if true
 */

int is_palindrome(char *s)
{
	int len_s = _strlen_recursion(char *s);
	int index = 0;

	if (len_s == 0)
		return (0);
	
