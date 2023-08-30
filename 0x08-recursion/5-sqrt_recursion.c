#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 *
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	int i = 1, sq;

	while (i)
	{
		if (i * i > n)
		{
			sq = -1;
			break;
		}
		else if (i * i == n)
		{
			sq = i;
			break;
		}
		else
			i++;
	}
	return (sq);
}
