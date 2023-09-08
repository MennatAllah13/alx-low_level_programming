#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: int
 * @size: int
 * Return: pointer*
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (0);
	x = malloc(nmemb * size);
	if (x == NULL)
		return (0);
	while (i < (nmemb * size))
	{
		*(i + x) = 0;
		i++;
	}
	return (x);
}
