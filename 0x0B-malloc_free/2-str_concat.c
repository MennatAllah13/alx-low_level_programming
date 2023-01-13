#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int c1 = 0, c2 = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[c1] != '\0')
		c1++;
	while (s2[c2] != '\0')
		c2++;

	s = malloc((c1 + c2 + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < c1 + c2; i++)
	{
		if (i > c1 - 1)
			s[i] = s2[i - c1];
		else
			s[i] = s1[i];
	}

	return (s);
}
