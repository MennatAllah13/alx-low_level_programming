#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */

void print_number(int n)
{
	unsigned int num, x, count = 1;

	if (n < 0)
	{
		_putchar(45);
		num = n * -1;
	}
	else
		num = n;

	x = num;

	while (x > 9)
	{
		x /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((num / count) % 10) + 48);
	}
}
