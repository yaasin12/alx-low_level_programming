#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Return: 0(SUCCESS)
 */
int main(void)
{
	int n;
	int n2;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n2 = n % 10;

	if (n2 > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, n2);
	else if (n2 == 0)
		printf("Last digit of %i is %i and is 0\n", n, n2);
	else if (n2 < 6)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, n2);

	return (0);
}