#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: amount of the arguments.
 * Return: sum of its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list values;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(values, n);
	for (i = 0; i < n; i++)
		sum += va_arg(values, int);
	va_end(values);
	return (sum);
}
