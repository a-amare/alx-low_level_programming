#include "main.h"

/**
 * _strncpy - copies string with limit?
 * 
 * @dest: first i/p
 * @src: second i/p
 * @n: char limit
 * 
 * Return: some concat delimited by either n or src
 * 
*/

char *_strncpy(char *dest, char *src, int n)
{
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];
    for ( ; i < n; i++)
        dest[i] = '\0';

    return (dest);
}