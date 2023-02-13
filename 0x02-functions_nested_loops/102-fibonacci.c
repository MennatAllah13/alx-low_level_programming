#include <stdio.h>

/**
 * main - Prints the add of the Fibonacci numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	int i, x = 1, y = 2, temp;

	printf("%d, %d", x, y);
	for (i = 0; i < 48; i++)
	{
		temp = x + y;
		x = y;
		y = temp;
		printf(", %d", y);
	}
	printf("\n");
	return (0);
}
