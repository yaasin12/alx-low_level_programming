#include"main.h"

/**
 * times_table - prints the 9 times table
 *
 * Example Table
 * 0,  0,  0,  0,  0,  0,  0,  0,  0,  0$
 * 0,  1,  2,  3,  4,  5,  6,  7,  8,  9$
 * return : void
*/

void times_table(void)
{
	int num, mult, tot;

	for (num = 0; num <= 9; ++num)
	{
		_putchar(48);
		for (mult = 1; mult <= 9; ++mult)
		{
			_putchar(',');
			_putchar(' ');

			tot = num * mult;

			/*
			 * put space if product is a single number
			 * place the first digit if its two numbers
			*/
			if (tot <= 9)
				_putchar(' ');
			else
				_putchar((tot / 10) + 48); /*get the first digit*/

			_putchar((tot % 10) + 48); /*get the second digit*/
		}
		_putchar('\n');
	}
}
