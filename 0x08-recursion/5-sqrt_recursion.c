#include "main.h"

/**
 * _sqrt - returns square root of a number
 * @x: test number
 * @y: squared number
 *
 * Return: the square root of n
 */
int _sqrt(int x, int y)
{
        if (x * x == y)
                return (x);
        else if (x > y / 2)
                return (-1);
        return (_sqrt(x + 1, y));
}

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
	return (_sqrt(2, n));
}
