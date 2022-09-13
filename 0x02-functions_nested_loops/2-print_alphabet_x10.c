#include"main.h"

/**
 * print_alphabet_x10 - function prints the alphabet 10 times
 * return - void
*/

void print_alphabet_x10(void)
{
	int x, alp;

	for (x = 0; x <= 9; ++x)
	{
		for (alp = 'a'; alp <= 'z'; ++alp)
			_putchar(alp);
		_putchar('\n');
	}
}
