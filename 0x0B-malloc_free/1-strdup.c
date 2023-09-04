#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *s;
	int j, i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	s = malloc((i + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		s[j] = str[j];
	}

	return (s);
}
