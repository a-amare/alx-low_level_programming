#include "main.h"

/**
 * _strncat : prints concatenated string with added byte limitation
 * @dest: first i/p
 * @src: second i/p
 * @n: number of bytes
 * 
 * Return:  a pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
    int d_len = 0, s_len = 0, i;

    while (dest[d_len] != '\0')
    {
        d_len++;
    }

    while (src[s_len] != '\0')
    {
        s_len++;
    }

    for (i = 0; i < n && i < s_len; i++)
    {
        dest[d_len + i] = src[i];
    }

    return (dest);
}