#include "main.h"
#include <stdio.h>

/**
 * *_strcat - concatinages two strings overwriting the last char
 *
 *@dest: string where the other string is added to
 *@src: the one that is added to the first one
 *
 *Return: a string that is the addition of both the characters
 */


char *_strcat(char *dest, char *src)
{
	int d_len = 0, s_len = 0, i;

	while (dest[d_len] != '\0')
		d_len++;

	while (src[s_len] != '\0')
		s_len++;

	for(i = 0; i < s_len; i++)
	{
		dest[d_len + i] = src[i];
	}

	dest[d_len + s_len] = '\0';
	return(dest);
}
