#include "main.h"

/**
 * _strcmp - compares two strings
 * 
 * @s1: first str
 * @s2: second str
 * 
 * Return: int
*/

int _strcmp(char *s1, char *s2)
{
    int i = 0, j = 0;
    int s1_len = 0, s2_len = 0;

    while (s1[s1_len] != '\n')
    {
        s1_len++;
    }

    while (s2[s2_len] != '\n')
    {
        s2_len++;
    }


    for (i = 0; i < s1_len && i < s2_len; i++)
    {
        if (s1[i] != s2[i])
        {
            j += s1[i] - s2[i];
        }
    }
    
    return (j);
}