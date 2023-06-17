#include <stdio.h>

/**
* THIS PROGRAM PRINTS THE FIRST 16 HEXADECIMAL NUMBERS
*
*/

int main (void)
{
    int hex = (0x0);

    while (hex <= 0x16)
    {
        putchar(hex);
        hex++;
    }

    return (0);    
}