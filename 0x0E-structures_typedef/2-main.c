#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;
    struct dog dog2;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&my_dog);

    dog2.age = 34;
    dog2.owner = "baba";
    print_dog(&dog2);


    return (0);
}
