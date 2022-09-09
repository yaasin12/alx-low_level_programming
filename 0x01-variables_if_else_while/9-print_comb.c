#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: prints numbers 0-9 in ascending order
 * Return: 0 (success)
 */

int main(void)
{
	int a;

	for (a = '0'; a <= '9' ; a++)
	{
		putchar(a);

		if (a != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
