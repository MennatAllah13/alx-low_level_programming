#include "main.h"

/**
 * print_last_digit - Prints the last digit
 * of a number.
 *
 * @x: input number as an integer.
 *
 * Return: last digit.
 */

int print_last_digit(int x)
{
	int last = x % 10;
	_putchar(last + 48);
	return (last);
}
