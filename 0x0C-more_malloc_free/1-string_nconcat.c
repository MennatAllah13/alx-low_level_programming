#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int c1 = 0, c2 = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[c1] != '\0')
		c1++;
	while (s2[c2] != '\0')
		c2++;
	if (c2 < n)
		n = c2;
	s = malloc(c1 + n + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < c1 + n; i++)
	{
		if (i > c1 - 1)
			s[i] = s2[i - c1];
		else
			s[i] = s1[i];
	}
	return (s);
}
