#include "main.h"

/**
 * print_to_98 - Prints all natural numbers
 * from n to 98.
 *
 * @n: input number.
 *
 * Return: no return.
 */

void print_to_98(int n)
{
	for (n; n <= 98; n++)
	{
		printf(n);
		printf(", ");
	}
	printf('\n');
}
