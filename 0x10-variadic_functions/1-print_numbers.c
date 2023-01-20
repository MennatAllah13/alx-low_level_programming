#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 *
 * Return: no return.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list values;

	va_start(values, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(values, int));

		if (i < n - 1 && separator)
			printf("%s", separator);
	}

	va_end(values);

	printf("\n");
}
