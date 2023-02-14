#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */

void print_number(int n)
{
	int num, count = 1, x;

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
		x = x / 10;
		count = count * 10;
	}
	for (; count >= 1; count = count / 10)
		_putchar(((num / count) % 10) + 48);
}
