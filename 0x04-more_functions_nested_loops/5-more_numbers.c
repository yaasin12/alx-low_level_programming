#include "main.h"

/**
 * more_numbers - prints 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	char a, b;
	int i = 0;

	while (i < 10)
	{
		for (a = 0; a <= 14; a++)
		{
			b = a;
			if (a > 9)
			{
				_putchar('1');
				b = a % 10;
			}
			_putchar('0' + b);
		}

		_putchar('\n');
		i++;
	}
}
