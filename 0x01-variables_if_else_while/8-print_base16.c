#include <stdio.h>

/**
* THIS PROGRAM PRINTS THE FIRST 16 HEXADECIMAL NUMBERS
*
*/

int main(void)
{
    /*this is also a short description*/
    int hex = (0xf);
    while (hex <= 0x16)
    {
        putchar(0xf - hex);
        hex++;
    }
    printf("/n");
    return (0); 
}