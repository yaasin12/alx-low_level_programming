#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: Prints base 16 numbers
 * Return: 0 (success)
 */

int main(void)
{
	char y;
	char x = '0';

	while (x =< '9')
	{
		putchar(x);
		x++;
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}