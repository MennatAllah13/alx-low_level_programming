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

	for (i = 0; i < (count - 1) / 2; i++)
	{
		for (j = count - 1; i > (count - 1) / 2; j--)
		{
			x = temp[j];
			temp[j] = s[i];
			s[i] = x;
		}
	}
}
