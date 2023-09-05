#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	int i = 0;
	long int x = 1, y = 2, temp;

	printf("%ld, %ld", x, y);
	while (i < 98)
	{
		temp = x + y;
		x = y;
		y = temp;
		printf(", %ld", y);
		i++;
	}
	printf("\n");
	return (0);
}
