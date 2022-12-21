#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */

void rev_string(char *s)
{
	int count = 0;
	int i, j;
	char *temp;

	while (s[count] != '\0')
	{
		count++;
	}

	temp = s;
	i = 0;
	j = count;

	while (i <= count && j >= 0)
	{
		s[i] = temp[j];
		i++;
		j--;
	}
}
