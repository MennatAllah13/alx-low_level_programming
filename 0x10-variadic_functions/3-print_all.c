#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *str;
	int check;
	va_list values;

	va_start(values, format);
	while (format && format[i])
	{
		check = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(values, int));
				check = 1;
				break;
			case 'i':
				printf("%d", va_arg(values, int));
				check = 1;
				break;
			case 'f':
				printf("%f", va_arg(values, double));
				check = 1;
				break;
			case 's':
				str = va_arg(values, char *);
				check = 1;
				if (str)
				{
					printf("%s", str);
					break;
				}
				printf("(nil)");
				break;
		}
		if (format[i + 1] && check == 1)
			printf(", ");
		i++;
	}
	va_end(values);
	printf("\n");
}
