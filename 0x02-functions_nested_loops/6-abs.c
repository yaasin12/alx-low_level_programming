#include "main.h"

/**
 * _abs - Entry point
 * @a: a is the input variable
 * Description: prints the absolute value of an integer
 * Return: int a
 */

int _abs(int a)
{
	if (a > 0)
	{
		return (a);
	}
	else if (a < 0)
	{
		return (-a);
	}
	else
	{
		return (a);
	}
}
