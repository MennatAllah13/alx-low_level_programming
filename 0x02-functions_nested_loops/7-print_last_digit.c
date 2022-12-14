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
	_putchar(x % 10);
	return (x % 10);
}
