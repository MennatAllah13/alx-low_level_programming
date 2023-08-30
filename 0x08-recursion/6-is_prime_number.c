#include "main.h"

/**
 * check_prime - detects if input is prime.
 * @x: input number.
 * @y: iterator.
 * Return: 1 if x is prime. 0 if n isn't prime.
 */
int check_prime(int x, int y)
{
	if (y <= 1)
		return (1);
	else if (x % y == 0)
		return (0);
	return (0 + check_prime(x, y--));
}

/**
 * is_prime_number - detects if input is prime.
 * @n: input number.
 * Return: 1 if n is prime. 0 if n isn't prime.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, n / 2));
}
