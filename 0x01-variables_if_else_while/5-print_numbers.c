#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all single digit numbers of base 10 starting from 0.
 *
 * Return: 0 (success)
 */

int main (void)
{
    int x;
    for(x = 0; x < 10; x++)
    {
        printf("%i", x);
    }
    putchar('\n');

    return (0);
}
