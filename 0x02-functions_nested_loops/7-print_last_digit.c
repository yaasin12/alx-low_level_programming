#include "main.h"

/**
 * print_last_digit - main
 * @a: n is an integer
 * Description: prints the last digit of a number(s)
 * Return: integer a
 */

int print_last_digit(int a)
{
    int last;
    if (a>0){
	    last = a % 10;
    };
	if (a < 0)
	{
		last = a % -10;
	}
	_putchar(last + '0');
	return (last);
}
