#include "variadic_functions.h"
/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *str;
	va_list values;

	va_start(values, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(values, int));
				break;
			case 'i':
				printf("%d", va_arg(values, int));
				break;
			case 'f':
				printf("%f", va_arg(values, double));
				break;
			case 's':
				str = va_arg(values, char *);
				if (str)
				{
					printf("%s", str);
					break;
				}
				printf("(nil)");
				break;
		}
		if (format[i + 1])
			printf(", ");
		i++;
	}
	va_end(values);
	printf("\n");
}
