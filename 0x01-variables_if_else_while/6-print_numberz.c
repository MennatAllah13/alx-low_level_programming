#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + 48);
		i++;
	}
	putchar('\n');
	return (0);
}
