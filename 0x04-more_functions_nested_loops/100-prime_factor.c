#include <stdio.h>
#include "main.h"

/**
 * main - prime numbers function
 *
 * Return: 0
 */

int main(void)
{
	long numb = 612852475143;
	long div = 2;
	long larg_prime = 0;

	while (num != 1)
	{
		if (numb % div == 0)
		{
			numb = numb / div;
			larg_prime = div;
		}
		div += 1;
	}
	printf("%ld\n", larg_prime);
	return (0);
}
