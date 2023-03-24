#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 *
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	while (i)
	{
		if (i * i > n)
			return (-1);
		else if (i * i == n)
			return (i);
		else
			i++;
	}
}
