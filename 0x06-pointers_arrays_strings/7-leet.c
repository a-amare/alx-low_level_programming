#include "main.h"

/**
 * leet - switches letters with numbers
 * 
 * Returns: someting
*/

char *leet(char *x)
{
    char * f = x;
    while (*x != '\0')
    {
        if (*x == 'a' || *x == 'A')
        {
            *x = '4';
        }
        else if (*x == 'e' || *x == 'E')
        {
            *x = '3';
        }
        else if (*x == 'o' || *x == 'O')
        {
            *x = '0';
        }
        else if (*x == 't' || *x == 'T')
        {
            *x = '7';
        }
        else if (*x == 'l' || *x == 'L')
        {
            *x = '1';
        }
        x++;

    }

    x = f;

    return (x);
}