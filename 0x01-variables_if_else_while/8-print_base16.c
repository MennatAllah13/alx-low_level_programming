#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 48 + 10; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 97 + 6; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
