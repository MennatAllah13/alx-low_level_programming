#include "main.h"

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 * Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
	char *x;
	int i, j = 0, c = 0;

	if (ac == 0)
		return (0);
	for (i = 0; i < ac; i++)
	{
		if (!av[i])
			return (NULL);
		while (av[i][j] != '\0')
		{
			j++;
			c++;
		}
		c++;
	}
	x = malloc(sizeof(char) * (c + 1));
	if (!x)
	{
		free(x);
		return (NULL);
	}
	i = 0;
	for (j = x = 0; x < c; j++, x++)
	{
		if (av[i][j] == '\0')
		{
			c[x] = '\n';
			i++;
			x++;
			j = 0;
		}
		if (x < c - 1)
			c[x] = av[i][j];
	}
	c[x] = '\0';
	return (c);
}
