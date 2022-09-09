#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: print num below 10 as char
 * Return: Always 0 (success)
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
	}
	putchar('\n');
	return (0);
}
