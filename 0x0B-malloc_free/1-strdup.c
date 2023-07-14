#include <stdlib.h>

/**
 * *_strdup - a function that duplicates a string
 *
 * @str: input string to duplicate
 *
 * Return: NULL if str == NULL
 *         @str
*/

char *_strdup(char *str)
{
	int i;
	int count_len_str = 0;
	char * dup;

	if (str == NULL)
	{
		return NULL;
	}

	/*CALCULATE SIZE OF INPUT string?*/
	while (str[count_len_str] != '\0')
	{
		count_len_str++;
	}

	/*use length to assign malloc*/
	
	dup = malloc(sizeof(char) * count_len_str);

	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < count_len_str; i++)
	{
		dup[i] = str[i];
	}

	return (dup);
}
