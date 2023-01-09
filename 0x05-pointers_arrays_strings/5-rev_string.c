#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */

void rev_string(char *s)
{
	int count = 0, i, j;
	char *temp, x;

	while (s[count] != '\0')
	{
		count++;
	}

	temp = s;

	for (i = 0; i < count - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			x = temp[j];
			temp[j] = temp[j - 1];
			temp[j - 1] = x;
		}
	}
}
