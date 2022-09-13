#include "main.h"

/**
 * main - Entry point
 * Description: a function that prints the alphabet,
 * in lowecase followed by a new line
 * Return: void
 */
void print_alphabet(void)
{
	char z = 'a';

	while (z <= 'z')
	{
		_putchar(z);
		z++;
	}
	_putchar('\n');
}
