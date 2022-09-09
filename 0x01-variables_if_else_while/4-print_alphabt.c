#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase, followed by a new line.
 *
 * Return: 0 (success)
 */

int main(void)
{
	int alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		if (alp != 'e' && alp != 'q')
		{
			putchar(alp);
		}
	}
	putchar('\n');
	return (0);
}
