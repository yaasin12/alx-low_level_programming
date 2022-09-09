#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main code
 * Return: 0(Successful)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is a positive number\n", n);
	else if (n < 0)
		printf("%i is a negative number\n", n);
	else
		printf("%i is equal to zero\n", n);

	return (0);
}