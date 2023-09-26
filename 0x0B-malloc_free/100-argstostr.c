#include "main.h"

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 * Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
	char *ch;
	int i, j = 0, c = 0, x;

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
	ch = malloc(sizeof(char) * (c + 1));
	if (!ch)
	{
		free(ch);
		return (NULL);
	}
	i = 0;
	for (j = x = 0; x < c; j++, x++)
	{
		if (av[i][j] == '\0')
		{
			ch[x] = '\n';
			i++;
			x++;
			j = 0;
		}
		if (x < c - 1)
			ch[x] = av[i][j];
	}
	ch[x] = '\0';
	return (ch);
}
