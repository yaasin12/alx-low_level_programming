#include "main.h"

/**
 * _abs - Entry point
 * @n: input variable 
 * Description: prints the absolute value of an integer
 * Return: a
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
