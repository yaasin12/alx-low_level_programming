#include "main.h"

/**
 * swap_int - exchange the values of a and b
 * @a: pointer a
 * @b: pointer b
 * Return : 0 (success)
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
