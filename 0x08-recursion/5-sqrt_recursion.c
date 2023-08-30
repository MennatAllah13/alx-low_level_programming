#include "main.h"

/**
* _sqrt_recursion - returns square root of a number
* @n: number to be used
*
* Return: the square root of n
*/
int _sqrt_recursion(int n)
{
	if (n <= 1)
		return (n);
	return (sqrt(2, n));
}

/**
 * sqrt - returns square root of a number
 * @n: test number
 * @x: squared number
 *
 * Return: the square root of n
 */
int sqrt(int x, int y)
{
	if (x * x == y)
		return (x);
	else if (x > y / 2)
                return (-1);
	return (sqrt(x + 1, y));
}
