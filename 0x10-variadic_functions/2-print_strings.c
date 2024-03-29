#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 * Return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list values;

	va_start(values, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(values, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(values);
}
