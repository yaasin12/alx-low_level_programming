#include "main.h"

/**
 * print_last_digit - main entry
 * @a: a is an integer
 * Description: prints the last digit of any number
 * Return: integer a
 */

int print_last_digit(int a)
{
	int last = a % 10;

	if (a < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
