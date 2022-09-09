#include <stdio.h>

/**
 * Main : main block
 * return : 0 (success)
 */

int main(void)
{
    char lowercase = 'a';
    char uppercase = 'A';

    /*Print a to z*/
    while (lowercase <= 'z')
    {
        putchar(lowercase);
        ++lowercase;
    }
    /*Print A to Z*/
    while (uppercase <= 'Z')
    {
        putchar(uppercase);
        ++uppercase;
    }
    putchar('\n');

    return (0);
}
