#include "main.h"

/**
 * _puts - prints a string + a new line
 * @st: pointer to a string to print
 *
 * Return: 0
 */

void _puts(char *st)
{
	int i = 0;

	while (st[i])
	{
		_putchar(st[i]);
		i++;
	}
	_putchar('\n');
}
